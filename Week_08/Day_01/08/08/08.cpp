// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.

#include <iostream>

#define EXPRESSION(x) (!(x)) ? (printf("ERROR: The expression is false!!")) : (printf("It's true!"))

int main() {
  int a = 2;
  int b = 8;
  EXPRESSION(a > b);
  std::cout << std::endl;
  EXPRESSION(a < b);
  return 0;
}
