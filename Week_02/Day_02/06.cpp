//============================================================================
// Name        : 06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int f[] = {3, 4, 5, 6, 7};
	// Please double all the elements, then print all of them

	for (int i = 0; i < sizeof(f)/sizeof(int); i++) {
      f[i] = f[i] * 2;

	cout << f[i] << endl;
	}
  return 0;
}

