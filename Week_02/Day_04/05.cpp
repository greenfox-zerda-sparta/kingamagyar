//============================================================================
// Name        : 05.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

bool has_negative(int* array, int len) {
  for (int i = 0; i < len; i++) {
    if (array[i] < 0) {
      return true;
    }
    return array;
  }
}

int main() {
  int numbers[] = {6, 5, -3, 4, -1, 8, 7};

  // Write a function that decides if an array includes at least one negative number or not
  cout << has_negative(numbers, 7);
  return 0;
}
