#include "gpio.hpp"
#include "rcc.hpp"

#include <cstdint>
#include <unistd.h>


#define CPU_FREQENCY 48000000U // CPU frequency: 48 MHz
#define ONE_MILLISECOND CPU_FREQENCY/1000U


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


void delay_3000_1000ms()
{
    for (uint32_t i = 0; i < 1000U * ONE_MILLISECOND; ++i)
    {
        // Insert NOP for power consumption:
        __asm__ volatile("nop");
    }
}


} // namespace blink

int main() {
    blink::board_gpio_init();

    mcal::gpioc::odr gpioc_odr;
    for (;;) {
        gpioc_odr.enable();
        blink::delay_3000_1000ms();
        gpioc_odr.disable();
        blink::delay_3000_1000ms();
    }
}
