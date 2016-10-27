//============================================================================
// Name        : 06.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void count(int* numbers, int length) {
  int even = 0;
  for (int i = 0; i < length; i++) {
	if (numbers[i] % 2 == 0 && numbers[i++] % 2 == 0) {
	  even++;
	}
  }
  cout << even;
}

int main() {
  int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};

  // Write a function that counts how many times is an even number is followed by
  // another even number in an array
  count(numbers, 10);
  return 0;
}
