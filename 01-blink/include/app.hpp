#pragma once

#include "gpio.hpp"
#include "rcc.hpp"

namespace app_blink {

class application final {
  static constexpr unsigned cpu_frequency = 48000000U;
  static constexpr unsigned one_millisecond = cpu_frequency / 1000U;

  void board_clocking_init() {
    mcal::rcc::cr::hse_clock_enable();
    mcal::rcc::cfgr2::set_prediv_2();
    mcal::rcc::cfgr::set_pll_src_hseprediv();
    mcal::rcc::cfgr::set_pll_mul(12);
    mcal::rcc::cr::enable_pll();
    mcal::rcc::cfgr::set_sysclk_source(mcal::rcc::cfgr::sysclk::pll);
    while (mcal::rcc::cfgr::switch_status() != mcal::rcc::cfgr::sysclk::pll) {
      ;
    }
  }

  void board_gpio_init() {
    mcal::rcc::ahbenr::enable_gpioc_clocking();
    mcal::gpioc::moder::conf_pc8_mode();
    mcal::gpioc::moder::conf_pc9_mode();
  }

  void delay_ms(uint32_t time) {
    time /= 100;
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
      mcal::gpioc::odr::enable_pc8();
      delay_ms(1000);
      mcal::gpioc::odr::disable_pc8();
      mcal::gpioc::odr::enable_pc9();
      delay_ms(1000);
      mcal::gpioc::odr::disable_pc9();
    }
  }
};

} // namespace app_blink