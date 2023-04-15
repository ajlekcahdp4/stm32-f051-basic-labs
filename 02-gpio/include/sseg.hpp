#pragma once

#include "stm32f051/gpioa.hpp"

#include <stdint.h>

namespace ssegm {

enum pins {
  A = 1 << 9,
  B = 1 << 6,
  C = 1 << 2,
  D = 1 << 4,
  E = 1 << 5,
  F = 1 << 10,
  G = 1 << 1,
  DP = 1 << 3,
  D1 = 1 << 8,
  D2 = 1 << 11,
  D3 = 1 << 7,
  D4 = 1 << 12
};

inline unsigned operator|(ssegm::pins lhs, ssegm::pins rhs) {
  return static_cast<ssegm::pins>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs));
}

static const unsigned digits[10] = {
    A | B | C | D | E | F,     // 0
    B | C,                     // 1
    A | B | G | E | D,         // 2
    A | B | G | C | D,         // 3
    F | G | B | C,             // 4
    A | F | G | C | D,         // 5
    A | F | G | E | D | C,     // 6
    A | B | C,                 // 7
    A | B | C | D | E | F | G, // 8
    A | F | G | B | C | D      // 9
};

// clang-format off
static const unsigned positions[4] = {
  D4,
  D3,
  D2,
  D1
};
// clang-format on

static const unsigned pins_used = A | B | C | D | E | F | G | DP | D1 | D2 | D3 | D4;

inline unsigned number_on_position(unsigned num, unsigned pos) {
  unsigned divisors[4] = {1, 10, 100, 1000};
  pos %= 4;
  return digits[(num / divisors[pos]) % 10] | positions[pos];
}

class ss_display {
  uint32_t display = 0;
  uint32_t quarter = 3;

public:
  uint16_t number = 0;

  void set_number_quater() {
    unsigned divisors[4] = {1, 10, 100, 1000};
    auto divisor = divisors[quarter % 4];
    display = digits[(number / divisor) % 10];
  }

  void push_display_state() {
    using namespace stmcpp::stm32f051;
    auto prev_state = ~pins_used & mgpioa::odr_register{}.get();
    auto to_write = pins_used & (display | positions[quarter]);
    mgpioa::odr_register{}.set(prev_state | to_write);
    quarter = (quarter + 1) % 4;
  }
};

} // namespace ssegm