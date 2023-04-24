#pragma once

#include "stm32f051/gpioa.hpp"
#include "stm32f051/gpiob.hpp"
#include "stm32f051/gpioc.hpp"
#include "stm32f051/nvic.hpp"
#include "stm32f051/rcc.hpp"
#include "stm32f051/tim14.hpp"
#include "stm32f051/tim2.hpp"
#include "stm32f051/tim3.hpp"

#include "encoder.hpp"
#include "noise.hpp"
#include "sseg.hpp"
#include "utils.hpp"

#include <stm32f051x8.h>

ssegm::ss_display seg7;
noise::noiser nsr;
int curr = 100;

using namespace stmcpp::stm32f051;

extern "C" void TIM2_IRQHandler() {
  mtim2::sr &= mtim2::sr_fields::uif_clear;
  seg7.number = curr;
  seg7.set_number_quater();
  seg7.push_display_state();
}

extern "C" void TIM3_IRQHandler() {
  mtim3::sr &= mtim3::sr_fields::uif_clear;
  nsr.emit_noise();
}

extern "C" void TIM14_IRQHandler() {
  mtim14::sr &= mtim14::sr_fields::uif_clear;
  auto delta = 100 * encoder::get_encoded_change();
  if (curr + delta < 0) curr = 0;
  else if (curr + delta <= 9999) curr = curr + delta;
}

namespace app_ssegm {

class application final {
  static constexpr unsigned cpu_frequency = 48000000U;
  static constexpr unsigned tacts_per_one_us = cpu_frequency / 100000U;

  void board_clocking_init() { mrcc::cr |= mrcc::cr_fields::hseon; }

  void tim2_config(unsigned dur) {

    NVIC_SetPriority(TIM2_IRQn, 1);
    mnvic::iser_register{}.set(mtim2::nvic_bit);
    mrcc::apb1enr |= mrcc::apb1enr_fields::tim2en;
    mtim2::arr = dur;
    mtim2::dier |= mtim2::dier_fields::uie_enabled;
    mtim2::cr1 |= mtim2::cr1_fields::cen_enabled;
  }

  void tim3_config(unsigned dur) {
    NVIC_SetPriority(TIM3_IRQn, 2);
    mnvic::iser_register{}.set(mtim3::nvic_bit);
    mrcc::apb1enr |= mrcc::apb1enr_fields::tim3en;
    mtim3::arr = dur;
    mtim3::dier |= mtim3::dier_fields::uie_enabled;
    mtim3::cr1 |= mtim3::cr1_fields::cen_enabled;
  }

  void tim14_config(unsigned dur) {
    NVIC_SetPriority(TIM14_IRQn, 3);
    mnvic::iser_register{}.set(mtim14::nvic_bit);
    mrcc::apb1enr |= mrcc::apb1enr_fields::tim14en;
    mtim14::arr = dur;
    mtim14::dier |= mtim14::dier_fields::uie_enabled;
    mtim14::cr1 |= mtim14::cr1_fields::cen_enabled;
  }

  void tim2_set_duration(unsigned dur) { mtim2::arr = SystemCoreClock / dur; }

  void tim3_set_duration(unsigned dur) { mtim3::arr = dur; }
  void tim14_set_duration(unsigned dur) { mtim3::arr = dur * SystemCoreClock; }

  void gpioa_init() {
    mrcc::ahbenr |= mrcc::ahbenr_fields::iopaen;
    mgpioa::configure_gen_purpose_output();
    mgpioa::otyper |= mgpioa::otyper_fields::ot0_pushpull;
    mgpioa::pupdr |= mgpioa::pupdr_fields::pupdr0_pulldown;
  }

  void gpiob_init() {
    mrcc::ahbenr |= mrcc::ahbenr_fields::iopben;
    mgpiob::configure_gen_purpose_output();
    mgpiob::otyper |= mgpiob::otyper_fields::ot0_pushpull;
    mgpiob::pupdr |= mgpiob::pupdr_fields::pupdr0_pulldown;
  }

  void gpioc_init() {
    mrcc::ahbenr |= mrcc::ahbenr_fields::iopcen;
    mgpioc::configure_gen_purpose_input();
    mgpioc::otyper |= mgpioc::otyper_fields::ot0_pushpull;
    mgpioc::pupdr |= mgpioc::pupdr_fields::pupdr0_pullup;
  }

  void board_gpio_init() {
    gpioa_init();
    gpiob_init();
    gpioc_init();
  }

  void delay_ms(uint32_t time) {
    for (uint32_t i = 0; i < time * tacts_per_one_us; ++i) {
      // Insert NOP for power consumption:
      __asm__ volatile("nop");
    }
  }

public:
  application() {}

  void run_loop() {
    board_clocking_init();
    tim2_config(SystemCoreClock / 1000 * 5);
    tim3_config(SystemCoreClock / 1000 * 5);
    tim14_config(SystemCoreClock / 300);
    board_gpio_init();
    seg7.number = curr;
    for (;;) {
      tim3_set_duration(9999 - curr);
      delay_ms(100);
    }
  }
};

} // namespace app_ssegm