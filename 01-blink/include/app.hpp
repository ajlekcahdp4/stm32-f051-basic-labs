#pragma once

#include "stm32f051/gpioc.hpp"
#include "stm32f051/rcc.hpp"

namespace app_blink {

using namespace stmcpp::stm32f051;

class application final {
  static constexpr unsigned cpu_frequency = 48000000U;
  static constexpr unsigned one_millisecond = cpu_frequency / 100000U;

  void board_clocking_init() { mrcc::cr |= mrcc::cr_fields::hseon; }

  void board_gpio_init() {
    mrcc::ahbenr |= mrcc::ahbenr_fields::iopcen;
    mgpioc::moder |= (mgpioc::moder_fields::moder0_output << (mgpioc::odr_fields::odr8.offset * 2));
    mgpioc::moder |= (mgpioc::moder_fields::moder0_output << (mgpioc::odr_fields::odr9.offset * 2));
  }

  void delay_ms(uint32_t time) {
    for (uint32_t i = 0; i < time * one_millisecond; ++i) {
      // Insert NOP for power consumption:
      __asm__ volatile("nop");
    }
  }

public:
  application() {}

  void run_loop() {
    board_gpio_init();
    for (;;) {
      mgpioc::odr ^= mgpioc::odr_fields::odr8;
      delay_ms(1000);
      mgpioc::odr ^= mgpioc::odr_fields::odr8;
      mgpioc::odr ^= mgpioc::odr_fields::odr9;
      delay_ms(1000);
      mgpioc::odr ^= mgpioc::odr_fields::odr9;
    }
  }
};

} // namespace app_blink