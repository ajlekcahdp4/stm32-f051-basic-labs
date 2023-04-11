#pragma once

#include "stm32f051/gpioa.hpp"
#include "stm32f051/gpiob.hpp"
#include "stm32f051/gpioc.hpp"
#include "stm32f051/nvic.hpp"
#include "stm32f051/rcc.hpp"
#include "stm32f051/tim2.hpp"
#include "stm32f051/tim3.hpp"

#include "gpioa.hpp"
#include "gpiob.hpp"
#include "gpioc.hpp"
#include "rcc.hpp"

#include "noise.hpp"
#include "sseg.hpp"
#include "utils.hpp"

#include <stm32f051x8.h>

ssegm::ss_display seg7;
noise::noiser nsr;

using namespace stmcpp::stm32f051;

extern "C" void TIM2_IRQHandler(void) {

  mtim2::sr &= mtim2::sr_fields::uif_clear;
  seg7.set_number_quater();
  seg7.push_display_state();
}

extern "C" void TIM3_IRQHandler(void) {
  mtim3::sr &= mtim3::sr_fields::uif_clear;
  nsr.emit_noise();
}

namespace app_ssegm {

class application final {
  static constexpr unsigned cpu_frequency = 48000000U;
  static constexpr unsigned tacts_per_one_us = cpu_frequency / 100000U;

  void board_clocking_init() { mrcc::cr |= mrcc::cr_fields::hseon; }

  void tim2_config() {
    NVIC_SetPriority(TIM2_IRQn, 1);
    NVIC_EnableIRQ(TIM2_IRQn);
    mrcc::apb1enr |= mrcc::apb1enr_fields::tim2en;
    mtim2::arr = SystemCoreClock / 1000 * 5;
    mtim2::dier |= mtim2::dier_fields::uie_enabled;
    mtim2::cr1 |= mtim2::cr1_fields::cen_enabled;
  }

  void tim3_config(int dur) {
    NVIC_SetPriority(TIM3_IRQn, 2);
    NVIC_EnableIRQ(TIM3_IRQn);
    mrcc::apb1enr |= mrcc::apb1enr_fields::tim3en;
    mtim3::arr = SystemCoreClock / dur;
    mtim3::dier |= mtim3::dier_fields::uie_enabled;
    mtim3::cr1 |= mtim3::cr1_fields::cen_enabled;
  }

  void tim2_set_duration(int dur) { mtim2::arr = SystemCoreClock / dur; }

  void tim3_set_duration(int dur) { mtim3::arr = SystemCoreClock / dur; }

  void board_gpio_init() {
    mrcc::ahbenr |= mrcc::ahbenr_fields::iopaen;
    mrcc::ahbenr |= mrcc::ahbenr_fields::iopben;
    mgpioa::configure_gen_purpose_output();
    mgpiob::configure_gen_purpose_output();
    mgpioa::otyper |= mgpioa::otyper_fields::ot0_pushpull;
    mgpiob::otyper |= mgpiob::otyper_fields::ot0_pushpull;
    mgpioa::pupdr |= mgpioa::pupdr_fields::pupdr0_pulldown;
    mgpiob::pupdr |= mgpiob::pupdr_fields::pupdr0_pulldown;
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
    tim2_config();
    tim3_config(100);
    board_gpio_init();
    for (unsigned tick = 0;; ++tick) {
      if (seg7.number < 9999) ++seg7.number;
      seg7.set_number_quater();
      if (tick % 10) tim3_set_duration(tick * 10);
      delay_ms(100);
    }
  }
};

} // namespace app_ssegm