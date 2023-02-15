#include "gpio.hpp"
#include "rcc.hpp"

#include <chrono>
#include <cstdint>
#include <iostream>
#include <thread>

namespace blink {

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
  mcal::gpioc::typer gpioc_typer;
  rcc_ahbenr.enable_gpioc_clocking();
  gpioc_moder.conf_pc8_mode();
  gpioc_typer.conf_pc8_type();
}

} // namespace blink

int main() {
#ifndef INSIDE_QEMU
  blink::board_clocking_init();
#endif
  blink::board_gpio_init();

  mcal::gpioc::odr gpioc_odr;
  for (;;) {
    gpioc_odr.enable();
    std::this_thread::sleep_for(3000ms);
    gpioc_odr.disable();
    std::this_thread::sleep_for(3000ms);
  }
}