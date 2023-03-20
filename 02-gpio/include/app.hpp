#pragma once

#include "gpioa.hpp"
#include "gpioc.hpp"
#include "rcc.hpp"
#include "sseg.hpp"
#include "utils.hpp"

namespace app_ssegm {

class application final {
  static constexpr unsigned cpu_frequency = 48000000U;
  static constexpr unsigned tacts_per_one_us = cpu_frequency / 100000U;

  void board_clocking_init() {
    mcal::rcc::cr::hse_clock_enable();
    mcal::rcc::cfgr2::set_prediv_2();
    mcal::rcc::cfgr::set_pll_src_hseprediv();
    mcal::rcc::cfgr::set_pll_mul(12);
    mcal::rcc::cr::enable_pll();
    mcal::rcc::cfgr::conf_ahb_48_mhz();
    mcal::rcc::cfgr::set_sysclk_source(mcal::rcc::cfgr::sysclk::pll);
    while (mcal::rcc::cfgr::switch_status() != mcal::rcc::cfgr::sysclk::pll) {
      ;
    }
  }

  void board_gpio_init() {
    mcal::rcc::ahbenr::conf_pa0_pa12_output();
    mcal::gpioa::moder::conf_general_purpose_output();
    mcal::gpioa::typer::conf_push_pull();
    *mcal::gpioa::moder::addr() |= 0U;
    mcal::gpioa::pupdr::conf_pull_down();
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
    board_gpio_init();
    ssegm::ss_display seg7;
    for (unsigned tick = 0;; ++tick) {
      if (!(tick % 10))
        if (seg7.number < 9999) ++seg7.number;
      seg7.set_number_quater(tick);
      seg7.push_display_state();
      delay_ms(1);
    }
  }
};

} // namespace app_ssegm