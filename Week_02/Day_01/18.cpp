//============================================================================
// Name        : 18.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "monkey";
	int l = x.length();

	if (l > 4) {
		cout << "Long";
	}else{
		cout << "Short";
	}
	// if the string is longer than 4 characters***
	// print 'Long!' otherwise print 'Short!'
	return 0;
}
