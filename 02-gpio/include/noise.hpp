#pragma once

#include "stm32f051/gpiob.hpp"
#include <stdint.h>

namespace noise {

enum pins {
  master = 1 << 3
};

inline constexpr unsigned operator|(pins lhs, pins rhs) {
  return static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs);
}

constexpr unsigned pins_used = master;

class noiser final {
  unsigned status = 0;

public:
  void emit_noise() {
    using namespace stmcpp::stm32f051;
    auto prev_state = ~master & mgpiob::odr_register{}.get();
    auto to_write = master & status;
    mgpiob::odr_register{}.set(prev_state | to_write);
    status = status ? 0 : master;
  }
};

} // namespace noise