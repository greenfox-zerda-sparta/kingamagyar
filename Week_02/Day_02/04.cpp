//============================================================================
// Name        : 04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int d[] = {1, 2, 3, 8, 5, 6};
	// change 8 to 4, then print all the elements of the array
    d[3] = 4;

    for (int i = 0; i <= 5; i++) {
        	cout << d[i] << endl;
        }
  return 0;
}
