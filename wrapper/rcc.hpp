//---------------
// RCC (Reset and Clock Control) registers
//---------------

#pragma once

#include <cstdint>

namespace mcal {

namespace rcc {

// clock control
class cr final {
  static auto address() {
    return reinterpret_cast<volatile uint32_t *>(0x40021000);
  }

public:
  cr() { *address() = 0x0; }

  void hse_clock_enable() {
    *address() |= (1 << 16);
    while (!hse_clock_ready()) {
      ;
    }
  }

  void hse_clock_disable() {
    *address() &= ~(1 << 16);
    while (!hse_clock_ready()) {
      ;
    }
  }

  bool hse_clock_ready() { return *address() & (1 << 17); }

  void enable_pll() {
    *address() |= (1U << 24);
    while (!pll_ready()) {
      ;
    }
  }

  bool pll_ready() { return *address() & (1U << 25); }
};

class cfgr final {
  static auto address() {
    return reinterpret_cast<volatile uint32_t *>(0x40021004);
  }

public:
  cfgr() { *address() = 0x0; }

  enum class pllsrc { hsi2 = 0, hse_prediv = 1 };

  void set_pll_src_hsi2() { *address() &= ~(1 << 16); }

  void set_pll_src_hseprediv() { *address() |= (1 << 16); }

  void set_pll_mul(const unsigned x) {
    unsigned val = x;
    if (x > 16)
      val = 16;
    *address() |= ((val - 2U) << 18);
  }

  enum class sysclk : unsigned { hsi = 0, hse = 1, pll = 2, hsi48 = 3 };

  void set_sysclk_source(const sysclk src) {
    *address() |= (unsigned(src) << 1);
  }

  sysclk switch_status() { return sysclk((*address() & 0b1100) >> 2); }
};

class cfgr2 final {
  static auto address() {
    return reinterpret_cast<volatile uint32_t *>(0x4002102C);
  }

public:
  void set_prediv_2() { *address() |= 1U; }
};

class ahbenr final {
  static auto address() {
    return reinterpret_cast<volatile uint32_t *>(0x40021014);
  }

public:
  void enable_gpioc_clocking() { *address() |= (1U << 19); }
};

} // namespace rcc

} // namespace mcal