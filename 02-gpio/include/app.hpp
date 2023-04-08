#pragma once

#include "gpioa.hpp"
#include "gpiob.hpp"
#include "gpioc.hpp"
#include "rcc.hpp"
#include "sseg.hpp"
#include "utils.hpp"

#include <stm32f051x8.h>

#define BVB_(bit) (1 << (bit))

#define GET_CLOCK_ENR_NUM(word) ((word >> 2U) & 0b11UL)

#define GET_CLOCK_ENR(word) ((volatile uint32_t *)((RCC_BASE) + 0x1C - GET_CLOCK_ENR_NUM(word) * 4))

#define RCC_TIM2_EN BVB_(0x00) | (0x0UL)
#define RCC_CLOCK_ON 0x1UL

ssegm::ss_display seg7;

extern "C" void TIM2_IRQHandler(void) {
  TIM2->SR &= ~TIM_SR_UIF;
  seg7.set_number_quater();
  seg7.push_display_state();
}

namespace app_ssegm {

class application final {
  static constexpr unsigned cpu_frequency = 48000000U;
  static constexpr unsigned tacts_per_one_us = cpu_frequency / 100000U;

  void rcc_clock_set(uint32_t clock, uint8_t state) {
    uint32_t volatile *clock_enr = GET_CLOCK_ENR(clock);
    uint32_t clock_num = GET_CLOCK_ENR_NUM(clock);
    *clock_enr = (*clock_enr & ~(clock_num << 2U)) | ((state) ? clock & ~(clock_num << 2U) : 0x0UL);
  }

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

  void tim2_config(void) {
    NVIC_SetPriority(TIM2_IRQn, 1);
    NVIC_EnableIRQ(TIM2_IRQn);
    rcc_clock_set(RCC_TIM2_EN, RCC_TIM2_EN);
    TIM2->ARR = SystemCoreClock / 1000 * 5;
    TIM2->DIER |= TIM_DIER_UIE;
    TIM2->CR1 |= TIM_CR1_CEN;
  }

  void board_gpio_init() {
    mcal::rcc::ahbenr::conf_a_output();
    mcal::rcc::ahbenr::conf_b_output();
    mcal::gpioa::moder::conf_general_purpose_output();
    mcal::gpiob::moder::conf_general_purpose_output();
    mcal::gpioa::typer::conf_push_pull();
    mcal::gpiob::typer::conf_push_pull();
    *mcal::gpioa::moder::addr() |= 0U;
    *mcal::gpiob::moder::addr() |= 0U;
    mcal::gpioa::pupdr::conf_pull_down();
    mcal::gpiob::pupdr::conf_pull_down();
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
    tim2_config();
    board_gpio_init();
    for (unsigned tick = 0;; ++tick) {
      if (seg7.number < 9999) ++seg7.number;
      seg7.set_number_quater();
      delay_ms(1000);
    }
  }
};

} // namespace app_ssegm