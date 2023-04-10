#pragma once

#include "gpiob.hpp"
#include <stdint.h>

namespace noise {

enum pins {
  power = 1 << 4,
  master = 1 << 3
};

inline constexpr unsigned operator|(pins lhs, pins rhs) {
  return static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs);
}

constexpr unsigned pins_used = master | power;

class noiser final {
  unsigned status = 0;

public:
  noiser() {
    auto prev_state = ~power & *mcal::gpiob::odr::addr();
    auto to_write = power;
    *mcal::gpiob::odr::addr() = prev_state | to_write;
  }

  void emit_noise() {
    auto prev_state = ~master & *mcal::gpiob::odr::addr();
    auto to_write = master & status;
    *mcal::gpiob::odr::addr() = prev_state | to_write;
    status = status ? 0 : master;
  }
};

} // namespace noise