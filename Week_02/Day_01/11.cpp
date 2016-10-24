//============================================================================
// Name        : 11.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int k = 1521;

	k%3==0 || k%5==0 ? cout << "Yay!" : cout << "No-no!";
	// tell if k is dividable by 3 or 5
	return 0;
}
