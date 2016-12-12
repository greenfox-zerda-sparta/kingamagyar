// Create a function like macro that takes an argument.
// It should print the code of the argument and the value of the argument too.
// E.g.:
//
// #define FunctionLikeMacro(a) //here comes magic
// int Main() {
// 	int a = 23;
// 	FunctionLikeMacro(a);
//
// }
//
// Should have the output:
// Variable a = 23;
// Where both 'a' and '23' are set by the macro.


#include <iostream>
#define PRINT(x) std::cout << "Variable " << #x << " = " << x << ";" << std::endl;

int main() {
  int a = 84;
  PRINT(a);
  return 0;
}
