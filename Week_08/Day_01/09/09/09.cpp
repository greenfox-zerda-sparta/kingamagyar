// Create a function like macro. The Macro should take one parameter and
// print out the parameter to the console after printing out in which file
// and at which line it has been called at.

#include <iostream>
#define PRINT(x) std::cout << "The file name is: " << __FILE__ << " and in line " << __LINE__ << ", parameter: " << x << std::endl;

int main() {
  PRINT(82);
  return 0;
}
