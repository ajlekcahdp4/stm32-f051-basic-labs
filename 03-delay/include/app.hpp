#pragma once

#include "gpioc.hpp"
#include "rcc.hpp"

namespace app_blink {

extern "C" void delay_us(uint32_t time, uint32_t tacts_per_us) {
  time *= tacts_per_us;
  for (uint32_t i = 0; i < time; ++i) {
    // Insert NOP for power consumption:
    __asm__ volatile("nop");
  }
}

class application final {
  static constexpr unsigned cpu_frequency = 48000000U;
  static constexpr unsigned tacts_pre_one_us = cpu_frequency / 1000000U;

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

public:
  application() {}

  void run_loop() {
    board_gpio_init();
    for (;;) {
      mcal::gpioc::odr::enable_pc8();
      delay_us(100, tacts_pre_one_us);
      mcal::gpioc::odr::disable_pc8();
      mcal::gpioc::odr::enable_pc9();
      delay_us(100, tacts_pre_one_us);
      mcal::gpioc::odr::disable_pc9();
    }
  }
};

} // namespace app_blink