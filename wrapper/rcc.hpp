//---------------
// RCC (Reset and Clock Control) registers
//---------------

#pragma once

#include <stdint.h>

namespace mcal {

namespace rcc {

// clock control
namespace cr {

inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x40021000);
}

inline bool hse_clock_ready() {
  return (*addr() & (1 << 17)) == (1 << 17);
}

inline void hse_clock_enable() {
  *addr() |= (1 << 16);
  while (!hse_clock_ready()) {
    ;
  }
}

inline void hse_clock_disable() {
  *addr() &= ~(1 << 16);
  while (!hse_clock_ready()) {
    ;
  }
}

inline bool pll_ready() {
  return (*addr() & (1U << 25)) == (1U << 25);
}

inline void enable_pll() {
  *addr() |= (1U << 24);
  while (!pll_ready()) {
    ;
  }
}
} // namespace cr

namespace cfgr {
inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x40021004);
}

enum class pllsrc {
  hsi2 = 0,
  hse_prediv = 1
};

inline void set_pll_src_hsi2() {
  *addr() &= ~(1 << 16);
}

inline void set_pll_src_hseprediv() {
  *addr() |= (1 << 16);
}

inline void set_pll_mul(const unsigned x) {
  unsigned val = x;
  if (x > 15) val = 15;
  *addr() |= ((val - 1U) << 18);
}

inline void conf_ahb_48_mhz() {
  *addr() |= 0b000U << 4;
}

enum class sysclk : unsigned {
  hsi = 0,
  hse = 1,
  pll = 2,
  hsi48 = 3
};

inline void set_sysclk_source(const sysclk src) {
  *addr() |= (unsigned(src));
}

inline sysclk switch_status() {
  return sysclk((*addr() & 0b1100) >> 2);
}
} // namespace cfgr

namespace cfgr2 {
inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x4002102C);
}

inline void set_prediv_2() {
  *addr() |= 1U;
}
} // namespace cfgr2

namespace ahbenr {
inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x40021014);
}

inline void conf_pa0_pa12_output() {
  *addr() |= (1U << 17);
}

inline void enable_gpioc_clocking() {
  *addr() |= (1U << 19);
}
} // namespace ahbenr

} // namespace rcc

} // namespace mcal