
#pragma once

#include <stdint.h>

namespace mcal {

namespace utils {

inline void coarse_delay_us(uint32_t time, uint32_t one_ms) {
  time /= 100;
  for (uint32_t i = 0; i < time * one_ms; ++i) {
    // Insert NOP for power consumption:
    __asm__ volatile("nop");
  }
}

} // namespace utils

} // namespace mcal