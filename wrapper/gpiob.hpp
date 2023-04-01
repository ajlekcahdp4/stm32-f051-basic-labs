//----------------
// GPIOB Registers
//----------------

#pragma once

#include <stdint.h>

namespace mcal {

namespace gpiob {

namespace moder {
inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x48000400);
}

inline void conf_general_purpose_output() {
  *addr() |= 0x1555554U;
}
}; // namespace moder

namespace typer {

inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x48000404);
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
  return reinterpret_cast<uint32_t volatile *>(0x48000414);
}

inline void push(uint32_t val) {
  *addr() = val;
}

} // namespace odr

namespace pupdr {
inline auto addr() {
  return reinterpret_cast<uint32_t volatile *>(0x4800040C);
}

inline void conf_pull_down() {
  *addr() |= (0b10U << (2U * 0U));
}

} // namespace pupdr

} // namespace gpiob

} // namespace mcal