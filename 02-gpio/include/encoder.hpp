#pragma once

#include "stm32f051/gpioc.hpp"
#include "utils.hpp"
#include <stdint.h>

namespace encoder {

using namespace stmcpp::stm32f051;

constexpr unsigned pins_used = mgpioc::idr_fields::idr0_high | mgpioc::idr_fields::idr1;

inline int get_encoded_change() {
  int counter = 0;
  static bool first = false;
  static bool second = false;

  first = second;
  second = mgpioc::idr_register{}.get() & (1 << 1);
  if (first != second) {
    counter += ((mgpioc::idr_register{}.get() & (1 << 0)) == second) ? 1 : -1;
  }

  return counter;
}
} // namespace encoder