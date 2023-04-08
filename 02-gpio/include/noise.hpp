#pragma once

#include "gpiob.hpp"
#include <stdint.h>

namespace noise {

enum pins {
  power = 1 << 13,
  master = 1 << 14
};

inline constexpr unsigned operator|(pins lhs, pins rhs) {
  return static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs);
}

constexpr unsigned pins_used = master | power;

void emit_noise() {
  auto prev_state = ~pins_used & *mcal::gpiob::odr::addr();
  auto to_write = pins_used & (master | power);
  *mcal::gpioa::odr::addr() = prev_state | to_write;
}

} // namespace noise