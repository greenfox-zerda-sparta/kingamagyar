//============================================================================
// Name        : 03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void create_characters(int count, char c) {
  for (int i = 0; i < count; ++i) {
    cout << c;
  }
}

void triangle(char main_character, int times) {
  for (int row = 1; row <= times; ++row) {
    create_characters(times - row, ' ');
    create_characters(row * 2 - 1, main_character);
    cout << endl;
  }
}

int main() {
  int value = 9;
  triangle('*', value);

  return 0;
}

