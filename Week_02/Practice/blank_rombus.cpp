//============================================================================
// Name        : blank_rombus.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void diamond(int num) {
  int total_rows = num / 2; //Counts all the rows of the shape (not only the top half.
  int i, row, space, star;
  for (i = 1; i <= 2 * total_rows - 1; i++) {
    cout << '*';
  }
  cout << endl;

  for (row = 1; row <= total_rows; row++) {
    for (star = total_rows - row; star >= 1; star--) {
      cout << '*';
    }
    for (space = 1; space <= 2 * row - 1; space++) {
      cout << ' ';
    }
    for (star = total_rows - row; star >= 1; star--) {
      cout << '*';
        }
    cout << endl;
  }
  for (row = total_rows - 1; row >=1; row--) {
    for (star = 1; star <= total_rows - row; star++) {
      cout << '*';
    }
    for (space = 1; space <= 2 * row -1; space++) {
      cout << ' ';
    }
    for (star = 1; star <= total_rows - row; star++) {
      cout << '*';
    }
    cout << endl;
  }
  for (i = 1; i <= 2 * total_rows - 1; i++) {
      cout << '*';
    }
    cout << endl;
}

int main() {
  int input = 9;  //Give an odd number
  diamond (input);
  return 0;
}

