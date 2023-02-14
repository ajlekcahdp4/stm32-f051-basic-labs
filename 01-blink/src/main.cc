#include "gpio.hpp"
#include "rcc.hpp"

#include <cstdint>
#include <iostream>

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

int main() {
#ifndef INSIDE_QEMU
  board_clocking_init();
#endif
}