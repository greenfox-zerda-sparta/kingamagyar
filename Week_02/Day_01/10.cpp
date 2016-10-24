//============================================================================
// Name        : 10.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int j1 = 10;
	int j2 = 3;

	j1 > pow(j2,2) && j1 < pow(j2,3) ? cout << "Yep" : cout << "Nope";
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	return 0;
}
