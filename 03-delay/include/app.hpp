#pragma once

#include "gpio.hpp"
#include "rcc.hpp"

namespace app_blink {

extern "C" void delay_us(uint32_t time, uint32_t tacts_per_us) {
  time *= tacts_per_us / 13U;
  __asm__ volatile(R"(
      movs r3, #0
      str r3, [r7, #4]
      b loop_action
      loop_start:
      ldr r3, [r7, #4]
      add r3, #1
      str r3, [r7, #4]
      loop_action:
      ldr r3, [r7, #4]
      movs r2, r0
      cmp r3, r2
      bls loop_start
  )");
}

class application final {
  static constexpr unsigned cpu_frequency = 48000000U;
  static constexpr unsigned tacts_pre_one_us = cpu_frequency / 1000000U;

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

public:
  application() {}

  void run_loop() {
    board_gpio_init();
    for (;;) {
      mcal::gpioc::odr::enable_pc8();
      delay_us(1000000, tacts_pre_one_us);
      mcal::gpioc::odr::disable_pc8();
      mcal::gpioc::odr::enable_pc9();
      delay_us(1000000, tacts_pre_one_us);
      mcal::gpioc::odr::disable_pc9();
    }
  }
};

} // namespace app_blink