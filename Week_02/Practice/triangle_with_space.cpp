//============================================================================
// Name        : triangle_with_space.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void diamond(int line) {
  for (int i = 1; i <= line; i++) {
    for (int j = line - i; j >= 1; j--) {
      cout << ' ';
    }
    for (int k = 1; k <= i; k++) {
      cout << "* ";
    }
    cout << endl;
  }

}

int main() {
  int line = 10;
  diamond (line);
  return 0;
}
