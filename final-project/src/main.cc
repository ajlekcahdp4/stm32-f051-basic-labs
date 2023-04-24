#include "stm32f051/gpioa.hpp"
#include "stm32f051/gpiob.hpp"
#include "stm32f051/rcc.hpp"

using namespace stmcpp::stm32f051;

constexpr unsigned cpu_frequency = 48000000U;
constexpr unsigned tacts_per_one_us = cpu_frequency / 100000U;

void board_clocking_init() {
  mrcc::cr |= mrcc::cr_fields::hseon;
}

void gpioa_init() {
  mrcc::ahbenr |= mrcc::ahbenr_fields::iopaen;
  mgpioa::configure_gen_purpose_input();
  mgpioa::otyper |= mgpioa::otyper_fields::ot0_opendrain;
  mgpioa::pupdr |= mgpioa::pupdr_fields::pupdr0_pullup;
}

void gpiob_init() {
  mrcc::ahbenr |= mrcc::ahbenr_fields::iopben;
  mgpiob::configure_gen_purpose_output();
  mgpiob::otyper |= mgpiob::otyper_fields::ot0_pushpull;
  mgpiob::pupdr |= mgpiob::pupdr_fields::pupdr0_pulldown;
}

bool get_input() {
  return mgpioa::idr_register{}.get() & mgpioa::idr_fields::idr1.mask;
}

void enable_output() {
  auto suround_state = ~mgpiob::odr_fields::odr3.mask & mgpiob::odr_register{}.get();
  auto to_write = mgpiob::odr_fields::odr3.mask;
  mgpiob::odr_register{}.set(to_write | suround_state);
}

constexpr auto led_pins =
    mgpiob::odr_fields::odr10.mask | mgpiob::odr_fields::odr1.mask | mgpiob::odr_fields::odr2.mask;
void enable_all_leds() {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  auto to_write = led_pins;
  mgpiob::odr_register{}.set(to_write | suround_state);
}

void disable_all_leds() {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  mgpiob::odr_register{}.set(suround_state);
}

void disable_output() {
  auto suround_state = ~mgpiob::odr_fields::odr3.mask & mgpiob::odr_register{}.get();
  mgpiob::odr_register{}.set(suround_state);
}

void delay_ms(uint32_t time) {
  for (uint32_t i = 0; i < time * tacts_per_one_us; ++i) {
    // Insert NOP for power consumption:
    __asm__ volatile("nop");
  }
}

int main() {
  board_clocking_init();
  gpioa_init();
  gpiob_init();

  for (;;) {
    if (get_input()) enable_all_leds();
    else disable_all_leds();
    delay_ms(5);
  }
}