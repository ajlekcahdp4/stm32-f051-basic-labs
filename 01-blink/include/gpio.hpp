//----------------
// GPIO Registers
//----------------

#pragma once

#include <cstdint>

namespace mcal {

namespace gpioc {

class moder final {
  static constexpr auto address =
      reinterpret_cast<volatile uint32_t *>(0x48000800);

public:
  void conf_pc8_mode() { *address |= (1U << 16); }
};

class typer final {
  static constexpr auto address =
      reinterpret_cast<volatile uint32_t *>(0x48000804);

public:
  void conf_pc8_type() { *address |= (0b0U << 8); }
};

class odr final {
  static constexpr auto address =
      reinterpret_cast<volatile uint32_t *>(0x48000814);

public:
  void enable() { *address |= 0x100U; }

  void disable() { *address &= ~0x100U; }
};

} // namespace gpioc

} // namespace mcal