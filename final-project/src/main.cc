#include "stm32f051/gpioa.hpp"
#include "stm32f051/gpiob.hpp"
#include "stm32f051/gpioc.hpp"
#include "stm32f051/nvic.hpp"
#include "stm32f051/rcc.hpp"
#include "stm32f051/tim2.hpp"
#include "stm32f051/tim3.hpp"
#include <stm32f051x8.h>

using namespace stmcpp::stm32f051;

constexpr unsigned cpu_frequency = 48000000U;
constexpr unsigned tacts_per_one_us = cpu_frequency / 100000U;
bool volatile enabled = false;

enum class modes {
  ALL,
  RED,
  GREEN,
  BLUE,
  PURPLE,
  BLINK_ALL,
  RAINBOW,
  COUNT
};

int index(const modes volatile &md) {
  return static_cast<int>(md);
}

modes index_mode(int idx) {
  return static_cast<modes>(idx % static_cast<int>(modes::COUNT));
}

modes volatile mode = modes::ALL;

void board_clocking_init() {
  mrcc::cr |= mrcc::cr_fields::hseon;
}

// magnetic switch and button input
void tim2_config(unsigned dur) {
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
constexpr auto purple = mgpiob::odr_fields::odr1.mask | mgpiob::odr_fields::odr2.mask;
constexpr auto led_pins = blue | red | green;

void enable_color(decltype(mgpiob::odr_fields::odr1.mask) color) {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  mgpiob::odr_register{}.set(color | suround_state);
}

void delay_ms(uint32_t time) {
  for (uint32_t i = 0; i < time * tacts_per_one_us / 1000; ++i) {
    // Insert NOP for power consumption:
    __asm__ volatile("nop");
  }
}

void blink_leds(decltype(mgpiob::odr_fields::odr1.mask) color) {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  mgpiob::odr_register{}.set(suround_state);
  delay_ms(7000);
  mgpiob::odr_register{}.set(color | suround_state);
  delay_ms(7000);
}

void disable_all_leds() {
  auto suround_state = ~led_pins & mgpiob::odr_register{}.get();
  mgpiob::odr_register{}.set(suround_state);
}

void rainbow() {
  static int counter = 0;
  const int max_cnt = 3000;
  const int third_cnt = max_cnt / 3;

  if (counter <= third_cnt) {
    enable_color(red);
    delay_ms(third_cnt - counter);
    disable_all_leds();
    enable_color(green);
    delay_ms(counter);
    disable_all_leds();
  } else if (counter <= 2 * third_cnt) {
    enable_color(green);
    delay_ms(2 * third_cnt - counter);
    disable_all_leds();
    enable_color(blue);
    delay_ms(counter - third_cnt);
    disable_all_leds();
  } else {
    enable_color(blue);
    delay_ms(max_cnt - counter);
    disable_all_leds();
    enable_color(red);
    delay_ms(counter - 2 * third_cnt);
    disable_all_leds();
  }

  counter = (counter + 1) % max_cnt;
}

void output() {
  switch (mode) {
  case modes::ALL: enable_color(led_pins); return;
  case modes::RED: enable_color(red); return;
  case modes::BLUE: enable_color(blue); return;
  case modes::GREEN: enable_color(green); return;
  case modes::PURPLE: enable_color(purple); return;
  case modes::BLINK_ALL: blink_leds(led_pins); return;
  case modes::RAINBOW: rainbow(); return;
  }
}

// PWM of leds
void tim3_config(unsigned dur) {
  NVIC_SetPriority(TIM3_IRQn, 2);
  mnvic::iser_register{}.set(mtim3::nvic_bit);
  mrcc::apb1enr |= mrcc::apb1enr_fields::tim3en;
  mtim3::arr = dur;
  mtim3::dier |= mtim3::dier_fields::uie_enabled;
  mtim3::cr1 |= mtim3::cr1_fields::cen_enabled;
}

extern "C" void TIM3_IRQHandler() {
  mtim3::sr &= mtim3::sr_fields::uif_clear;
  if (enabled) {
    output();
  } else {
    disable_all_leds();
  }
}

int main() {
  board_clocking_init();
  gpioa_init();
  gpiob_init();
  gpioc_init();
  tim2_config(SystemCoreClock / 1000 * 5);
  tim3_config(SystemCoreClock / 100);

  for (;;)
    ;
}