// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.

#include <iostream>
#define PRINT(x) std::cout << #x

int main() {
  PRINT(Hallo!);
  return 0;
}
