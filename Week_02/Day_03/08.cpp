//============================================================================
// Name        : 08.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void swap(int *high, int *low) {
	int temp = *high;
	*high = *low;
	*low = temp;
}

int main() {
  int high_number = 2;
  int low_number = 6655;

  int* high_number_pointer = &high_number;
  int* low_number_pointer = &low_number;
  // Please fix the problem and swap the value of the variables,
  // without using the "high_number" and the "low_number" variables.
  swap(*high_number_pointer, *low_number_pointer);
  cout << "High number: " << *high_number_pointer << endl;
  cout << "Low number: " << *low_number_pointer << endl;
  return 0;
}
