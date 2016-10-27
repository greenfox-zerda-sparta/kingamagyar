//============================================================================
// Name        : 04.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void reverse(int* array, int length) {
  for (int i = 0; i < length/2; ++i) {
    int temp = array[length-i-1];
    array[length-i-1] = array[i];
    array[i] = temp;
  }
  for (int i = 0; i < length; ++i) {
  	  cout << array[i] << ", ";
  }
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

  // Write a function that takes an array and its length than reverses the array
  reverse(array, 8);
  return 0;
}
