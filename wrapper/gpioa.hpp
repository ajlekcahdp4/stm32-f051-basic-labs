//----------------
// GPIOA Registers
//----------------

#pragma once

#include <stdint.h>

namespace mcal {

namespace gpioa {

namespace moder {
inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x48000000);
}

inline void conf_general_purpose_output() {
  *addr() |= 0x1555554U;
}
}; // namespace moder

namespace typer {

inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x48000004);
}

inline void conf_push_pull() {
  *addr() = 0U;
}

inline void conf_open_drain() {
  *addr() |= 0x0000ffff;
}

} // namespace typer

namespace odr {

inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x48000014);
}

inline void push(uint32_t val) {
  unsigned prev_state = *addr();
  *addr() = prev_state | (val & 0x0000ffffU);
}

} // namespace odr

namespace pupdr {
inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x4800000C);
}

inline void conf_pull_down() {
  *addr() |= (0b10U << (2U * 0U));
}

} // namespace pupdr

} // namespace gpioa

} // namespace mcal