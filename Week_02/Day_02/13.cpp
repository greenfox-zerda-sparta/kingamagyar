//============================================================================
// Name        : 13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int factorial(int i);

int main() {
  // create a function that returns it's input factorial
  int i;
  cout << "Enter a positive number: ";
  cin >> i;
  cout << "The factorial of " << i << " is " << factorial(i);
  return 0;
}

int factorial(int i) {
  if(i > 1) {
    return i * factorial(i - 1);
  } else {
    return 1;
  }
}
