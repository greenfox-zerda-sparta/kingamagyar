//============================================================================
// Name        : 14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int min(int numbers[], int length);

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  // Write a function that takes an array and its length returns the minimal element
  // in the array (your own min function)
  int length = sizeof(numbers)/sizeof(int);
  cout << min(numbers, length);
  return 0;
}

int min(int numbers[], int length) {
  int smallest = numbers[0];
  for (int i = 0; i < length; i++) {
    if(numbers[i] < smallest) {
      smallest = numbers[i];
    }
  }
 return smallest;
}
