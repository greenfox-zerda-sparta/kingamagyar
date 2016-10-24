//============================================================================
// Name        : 24.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "With for:" << endl;

  int ae = 4;
	string text = "Gold";

	for (ae = 1 ; ae <= 4 ; ae++) {
		cout << text << endl;
	}

	cout << "\nWith while:" << endl;
	ae = 1;
	while(ae <= 4) {
	  cout << text << endl;
	  ae++;
	}

	cout << "\nWith do while:" << endl;
	ae = 1;
	do {
	  cout << text << endl;
	  ae++;
	} while (ae <= 4);

	// print content of the text variable ae times
	return 0;
}


