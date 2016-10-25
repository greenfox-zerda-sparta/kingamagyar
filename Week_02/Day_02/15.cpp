//============================================================================
// Name        : 15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int index(int numbers[], int length, int num) {
  for (int i = 0; i < length; i++) {
    if(numbers[i] == num) {
      return i;
    }
  }
  return -1;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  int length = sizeof(numbers)/sizeof(int);
  // Write a function that takes an array, its length and a number
  // and it returns the index of the given number in the array.
  // It should return -1 if did not find it. (linear search)
  cout << "The index of the given number is " << index(numbers, length, 5);
  return 0;
}
