// Create a function like macro that takes one argument.
// If the argument is false, it should print out the following:
// The expression in the argument. And the file name and the line in the file.


#include <iostream>
#define CHECK(arg) (!(arg)) ? (std::cout << #arg << " is false in file: " << __FILE__ << "; line: " << __LINE__ << std::endl) : (std::cout << #arg << " is true" << std::endl)

int main() {
  int a = 9;
  int b = 88;
  
  CHECK(a > b);
  return 0;
}
