//============================================================================
// Name        : 07.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
  int high_number = 6655;
  int low_number = 2;

  int* high_number_pointer = &low_number;
  int* low_number_pointer = &high_number;
  // Please fix the problem and swap where the pointers point,
  // without using the "&" operator.
  int *temp = high_number_pointer;
  high_number_pointer = low_number_pointer;
  low_number_pointer = temp;
  cout << "High number: " << *high_number_pointer << endl;
  cout << "Low number: " << *low_number_pointer << endl;
  return 0;
}
