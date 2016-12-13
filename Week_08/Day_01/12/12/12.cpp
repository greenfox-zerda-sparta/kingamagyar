// Take the function like macro from the previous exercise.
// Make it so, that it's defined like the way You wrote it
// when __DEBUG is defined.
// It's defined to be nothing otherwise.

#include <iostream>
#define __DEBUG
#ifdef __DEBUG
#define CHECK(arg) (!(arg)) ? (std::cout << #arg << " is false in file: " << __FILE__ << "; line: " << __LINE__ << std::endl) : (std::cout << #arg << " is true" << std::endl)
#else
#define CHECK(arg)
#endif

int main() {
  int a = 29;
  int b = 90;
  CHECK(a > b);
  return 0;
}
