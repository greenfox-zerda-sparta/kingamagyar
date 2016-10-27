//============================================================================
// Name        : 02.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void fill(int* numbers, int length) {
  for (int i = 0; i < length; i++) {
	numbers[i] = i;
  }
}

int main() {
  int array[10];

  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length
  fill(array, 11);
  for (int i = 0; i < 11; i++) cout << array[i] << endl;
}
