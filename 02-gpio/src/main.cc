#include "app.hpp"

#include <unistd.h>

int main() {
  app_ssegm::application app{};
  app.run_loop();
  return 0;
}
