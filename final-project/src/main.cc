#include "stm32f051/gpioa.hpp"
#include "stm32f051/gpiob.hpp"
#include "stm32f051/gpioc.hpp"
#include "stm32f051/nvic.hpp"
#include "stm32f051/rcc.hpp"
#include "stm32f051/tim2.hpp"
#include <stm32f051x8.h>

using namespace stmcpp::stm32f051;

constexpr unsigned cpu_frequency = 48000000U;
constexpr unsigned tacts_per_one_us = cpu_frequency / 100000U;
bool volatile enabled = false;

enum class modes {
  ALL,
  RED,
  GREEN,
  BLUE
};

int index(const modes volatile &md) {
  return static_cast<int>(md);
}

modes index_mode(int idx) {
  switch (idx % 4) {
  case 0: return modes::ALL;
  case 1: return modes::RED;
  case 2: return modes::GREEN;
  case 3: return modes::BLUE;
  }
}

modes volatile mode = modes::ALL;

void board_clocking_init() {
  mrcc::cr |= mrcc::cr_fields::hseon;
}

void tim2_config(unsigned dur) {
  NVIC_SetPriority(TIM2_IRQn, 1);
  mnvic::iser_register{}.set(mtim2::nvic_bit);
  mrcc::apb1enr |= mrcc::apb1enr_fields::tim2en;
  mtim2::arr = dur;
  mtim2::dier |= mtim2::dier_fields::uie_enabled;
  mtim2::cr1 |= mtim2::cr1_fields::cen_enabled;
}

extern "C" void TIM2_IRQHandler() {
  static int counter = 0;
  mtim2::sr &= mtim2::sr_fields::uif_clear;
  auto input = mgpioc::idr_register{}.get();
  enabled = input & mgpioc::idr_fields::idr1.mask;
  if (input & mgpioc::idr_fields::idr13.mask) counter = (counter + 1) % 31;
  else counter = 0;
  if (counter == 30) {
    mode = index_mode(index(mode) + 1);
    counter = 0;
  }
}

void gpioa_init() {
  mrcc::ahbenr |= mrcc::ahbenr_fields::iopaen;
  mgpioa::configure_gen_purpose_output();
  mgpioa::otyper |= mgpioa::otyper_fields::ot0_opendrain;
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
  mgpioc::otyper |= mgpioc::otyper_fields::ot0_opendrain;
  mgpioc::pupdr |= mgpioc::pupdr_fields::pupdr0_pullup;
}

constexpr auto blue = mgpiob::odr_fields::odr1.mask;
constexpr auto red = mgpiob::odr_fields::odr2.mask;
constexpr auto green = mgpiob::odr_fields::odr10.mask;
constexpr auto led_pins = blue | red | green;

void enable_all_leds() {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  auto to_write = led_pins;
  mgpiob::odr_register{}.set(to_write | suround_state);
}

void enable_blue_leds() {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  auto to_write = blue;
  mgpiob::odr_register{}.set(to_write | suround_state);
}

void enable_red_leds() {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  auto to_write = red;
  mgpiob::odr_register{}.set(to_write | suround_state);
}

void enable_green_leds() {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  auto to_write = green;
  mgpiob::odr_register{}.set(to_write | suround_state);
}

void disable_all_leds() {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  mgpiob::odr_register{}.set(suround_state);
}

void delay_ms(uint32_t time) {
  for (uint32_t i = 0; i < time * tacts_per_one_us; ++i) {
    // Insert NOP for power consumption:
    __asm__ volatile("nop");
  }
}

void output() {
  switch (mode) {
  case modes::ALL: {
    enable_all_leds();
    return;
  }
  case modes::RED: {
    enable_red_leds();
    return;
  }
  case modes::BLUE: {
    enable_blue_leds();
    return;
  }
  case modes::GREEN: {
    enable_green_leds();
    return;
  }
  }
}

int main() {
  board_clocking_init();
  gpioa_init();
  gpiob_init();
  gpioc_init();
  tim2_config(SystemCoreClock / 1000 * 5);

  for (;;) {
    if (enabled) output();
    else disable_all_leds();
    delay_ms(50);
  }
}