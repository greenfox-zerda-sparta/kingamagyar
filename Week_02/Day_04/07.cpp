//============================================================================
// Name        : 07_.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void triangle(char star, int input) {
  for (int i = 0; i < input; i++) {
    for (int j = 0; j <= i; j++) {
      cout << star;
	}
    cout << endl;
  }
}


int main() {
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument
  int input;
  char star = '*';
	cout << "Enter a positive integer: ";
	cin >> input;
	triangle(star, input);
  return 0;
}
