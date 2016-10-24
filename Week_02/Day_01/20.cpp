//============================================================================
// Name        : 20.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int z = 13;

	if(z > 10 && z < 20){
		cout << "Sweet!";
	} else if (z < 10) {
		cout << "More!";
	} else {
		cout << "Less!";
	}
	// if z is between 10 and 20 print 'Sweet!'
	// if less than 10 print 'More!',
	// if more than 20 print 'Less!'
	return 0;
}
