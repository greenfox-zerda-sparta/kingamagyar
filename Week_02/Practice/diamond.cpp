//============================================================================
// Name        : diamond.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void diamond(int num) {
  int total_rows = (num + 2) / 2;  // the first and last rows are counted separately
  int row, space, star;
  for (row = 1; row <= total_rows; row++) {
    for (space = total_rows - row; space >= 1; space--) {
      cout << ' ';
    }
    for (star = 1; star <= 2 * row - 1; star++) {
      cout << "*";
    }
    cout << endl;
  }
  for (row = total_rows - 1; row >=1; row--) {
    for (space = 1; space <= total_rows - row; space++) {
      cout << ' ';
    }
    for (star = 1; star <= 2 * row -1; star++) {
      cout << '*';
    }
    cout << endl;
  }
}

int main() {
  int line = 7; //give an odd number, if even, then the diamond has an extra line
  diamond (line);  // odd number to have a nice shape
	return 0;
}
