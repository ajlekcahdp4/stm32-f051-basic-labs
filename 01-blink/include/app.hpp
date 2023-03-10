#pragma once

#include "gpio.hpp"
#include "rcc.hpp"

namespace app_blink {

class application final {
  static constexpr unsigned cpu_frequency = 48000000U;
  static constexpr unsigned one_millisecond = cpu_frequency / 1000U;

  void board_clocking_init() {
    mcal::rcc::cr rcc_cr;
    mcal::rcc::cfgr2 rcc_cfgr2;
    mcal::rcc::cfgr rcc_cfgr;

    rcc_cr.hse_clock_enable();
    rcc_cfgr2.set_prediv_2();
    rcc_cfgr.set_pll_src_hseprediv();
    rcc_cfgr.set_pll_mul(12);
    rcc_cr.enable_pll();
    rcc_cfgr.set_sysclk_source(mcal::rcc::cfgr::sysclk::pll);
    while (rcc_cfgr.switch_status() != mcal::rcc::cfgr::sysclk::pll) {
      ;
    }
  }

  void board_gpio_init() {
    mcal::rcc::ahbenr rcc_ahbenr;
    mcal::gpioc::moder gpioc_moder;
    rcc_ahbenr.enable_gpioc_clocking();
    gpioc_moder.conf_pc8_mode();
    gpioc_moder.conf_pc9_mode();
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