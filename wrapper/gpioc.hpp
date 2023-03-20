//----------------
// GPIOC Registers
//----------------

#pragma once

#include <stdint.h>

namespace mcal {

namespace gpioc {

namespace moder {
inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x48000800);
}

inline void conf_pc8_mode() {
  *addr() |= (1U << 16);
}

inline void conf_pc9_mode() {
  *addr() |= (1U << 18);
}
}; // namespace moder

namespace odr {

inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x48000814);
}

// blue led
inline void enable_pc8() {
  *addr() |= (0x1U << 8);
}
inline void disable_pc8() {
  *addr() &= ~(0x1U << 8);
}
// green led
inline void enable_pc9() {
  *addr() |= (0x1U << 9);
}
inline void disable_pc9() {
  *addr() &= ~(0x1U << 9);
}
}; // namespace odr

} // namespace gpioc

} // namespace mcal