//============================================================================
// Name        : 12.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void safeUnion(int *a, int l_a, int *b, int l_b, int *result, int l_res) {
	// Implement this function to create the union of a and b into the array result!
	for (int i = 0; i < l_a; i++) {
		result[i] = a[i];
	}
	for (int i = 0, l_res = l_a+i; i < l_b; i++) {
		result[l_res] = b[i];
		l_res++;
	}
}

int main(int argc, char** argv) {
	int a[3] = {1,2,3};
	int b[3] = {4,5,6};
	int c[6];
	safeUnion(a,3,b,3,c,6);
	for (int i = 0; i<6; i++) cout <<c[i] << endl;

}
