#include "Fibonacci.hpp"

int Fibonacci::return_fibonacci_number(int index) {
  if (index == 0 || index == 1) {
    return index;
  } else if (index < 0) {
    throw "Error: the index cannot be a negative number";
  } else {
    return return_fibonacci_number(index - 1) + return_fibonacci_number(index - 2);
  }
}
