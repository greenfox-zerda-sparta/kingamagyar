//============================================================================
// Name        : 08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
  int h[] = {3, 4, 5, 6, 7};
  int sum = 0;
	// print the sum of all numbers in h
    for(int i = 0; i <= 4; i++) {
    	sum += h[i];
    }
    	cout << sum << endl;

  return 0;
}
