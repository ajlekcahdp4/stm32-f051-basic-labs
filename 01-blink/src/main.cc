#include "app.hpp"

#include <cstdint>
#include <unistd.h>

int main() {
  app_blink::application app{};
  app.run_loop();
}
