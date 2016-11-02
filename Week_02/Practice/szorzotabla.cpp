//============================================================================
// Name        : szorzotabla.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void arithmetic(int input) {
  for (int row = 1; row <= input; row++) {
    for (int col = 1; col <= input; col++) {
      cout << row << " * " << col << " = " << row * col << "\t";
    }
    cout << endl;
  }
}

int main() {
  int number = 10;
  arithmetic(number);
  return 0;
}
