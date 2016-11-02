//============================================================================
// Name        : Pascal_triangle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void triangle(int lines) {
  int row, space, character;
  for (row = 0; row < lines; row++) {
    for (space = lines - row; space >= 1; space--) {
      cout << ' ';
    }
    int print_char = 1;
    int num = row;
    int denom = 1;
    for (character = 0; character <= row; character++) {
      cout << ' ' << print_char;
      print_char *= num;
      print_char /= denom;
      num--;
      denom++;
    }
    cout << endl;
  }
}

int main() {
	int input = 5;
	triangle(input);
	return 0;
}
