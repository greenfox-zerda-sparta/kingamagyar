//============================================================================
// Name        : 19.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "cheese";

	if (x.length()%2 == 0){
		cout << "True";
	}else{
		cout << "False";
	}
	// Tell if the x has even or odd number of
	// characters with a True for even and
	// false False output otherwise
	return 0;
}
