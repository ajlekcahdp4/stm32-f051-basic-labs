#include "app.hpp"

#include "stm32f051/gpioc.hpp"

#include <cstdint>
#include <unistd.h>

namespace {

using namespace stmcpp::stm32f051;

void init() {
  mcal::rcc::ahbenr::enable_gpioc_clocking();
  mgpioc::moder |= (mgpioc::moder_fields::moder0_output << (mgpioc::odr_fields::odr8.offset * 2));
}

} // namespace

int main() {
  auto delay = []() {
    for (uint32_t i = 0; i < static_cast<uint32_t>(5e5); ++i) {
      asm volatile("nop");
    }
  };

  init();
  while (true) {
    mgpioc::odr ^= mgpioc::odr_fields::odr8;
    delay();
  }

  // app_blink::application app{};
  // app.run_loop();
}
