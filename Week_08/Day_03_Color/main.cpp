#include "Color.hpp"
#include <iostream>

int main() {
  Color c1;
  std::cout << "RGB default: " << c1.get_red() << c1.get_green() << c1.get_blue() << std::endl;
  std::cout << c1.get_rgb() << std::endl;
  return 0;
}
