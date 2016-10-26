//============================================================================
// Name        : 05.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
  int numbers[] = {5, 6, 7, 8, 9};
  int* number_pointer = &numbers[0];
  // The "number_pointer" should point to the third element of the array called "numbers",
  // than please print its value with it. Solve the problem without reusiong the "&" operator
  // for getting the address of the third element.
  *number_pointer = numbers[2];
  cout << *number_pointer << endl;
  cout << number_pointer; //getting the address of the 3rd element
  return 0;
}
