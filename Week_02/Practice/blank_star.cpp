//============================================================================
// Name        : blank_star.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void shape(int lines) {
  int row, star, space;
  for (row = 1; row <= 2 * lines - 1; row++) {
    cout << '*';
  }
  cout << endl;
  for (row = 1; row < lines; row++) {
    for (star = lines - row; star > 0; star--) {
      cout << '*';
    }
    for (space = 0; space < 2 * row - 1; space++) {
      cout << ' ';
    }
    for (star = lines - row; star > 0; star--) {
      cout << '*';
    }
    cout << endl;
  }
  for (row = 3; row >= 1; row--) {
    for (star = 1; star <= lines - row; star++) {
      cout << '*';
    }
    for (space = 2 * row - 1; space >= 1; space--) {
      cout << ' ';
    }
    for (star = 1; star <= lines - row; star++) {
    cout << '*';
    }
    cout << endl;
  }
  for (row = 1; row <= 2 * lines - 1; row++) {
    cout << '*';
  }
  cout << endl;
}

int main() {
	int input = 5;
	shape(input);
	return 0;
}
