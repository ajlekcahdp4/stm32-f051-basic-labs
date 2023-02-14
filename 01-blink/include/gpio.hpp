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

} // namespace gpioc

} // namespace mcal