//----------------
// GPIO Registers
//----------------

#pragma once

#include <cstdint>

namespace mcal {

namespace gpioc {

class moder final {
  static auto address() {
    return reinterpret_cast<volatile uint32_t *>(0x48000800);
  }

public:
  void conf_pc8_mode() { *address() |= (1U << 16); }

  void conf_pc9_mode() { *address() |= (1U << 18); }
};

class odr final {
  static auto address() {
    return reinterpret_cast<volatile uint32_t *>(0x48000814);
  }

public:
  // blue led
  void enable_pc8() { *address() |= (0x1U << 8); }
  void disable_pc8() { *address() &= ~(0x1U << 8); }
  // green led
  void enable_pc9() { *address() |= (0x1U << 9); }
  void disable_pc9() { *address() &= ~(0x1U << 9); }
};

} // namespace gpioc

} // namespace mcal