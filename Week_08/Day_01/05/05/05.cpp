// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.

#include <iostream>

#ifdef __DEBUG
#define PRINT(a) printf("DEBUG: "#a)
#else
#define PRINT(a) printf("RELEASE: "#a)
#endif


int main() {
  
  PRINT(this);
  return 0;
}
