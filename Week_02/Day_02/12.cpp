//============================================================================
// Name        : 12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int sum(int numbers[], int length);

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  int length = sizeof(numbers)/sizeof(int);
  // write your own sum function
  // it should take an array and its length
  cout << sum(numbers, length);
  return 0;
}

int sum(int numbers[], int length) {
  int result = 0;
  for (int i = 0; i < length; i++) {
    result += numbers[i];
  }
  return result;
}
