//============================================================================
// Name        : 23.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "With For:" << endl;
  int ad = 6;

	for(ad = 0 ; ad != 7 ; ad++){
		cout << ad << endl;
	}
	// print the numbers till ad from 0

	cout << "\nWith while:" << endl;
	ad = 0;
	while(ad <= 6) {
	  cout << ad++ <<endl;
	}

	cout << "\nWith Do While:" << endl;
	ad = 0;
	do {
	  cout << ad++ << endl;
	} while (ad <=6);

	return 0;
}
