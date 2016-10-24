//============================================================================
// Name        : 25.cpp
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

  for(int x = 0 ; x <= 20 ; x += 2) {
		cout << x << endl;
	}

  cout << "\nWith while:" << endl;
  int x = 0;
  while(x <= 20) {
    if(x%2 == 0){
    cout << x << endl;
    }
    x++;
  }

  cout << "\nWith do while:" << endl;
  x = 0;
  do {
    if(x%2 == 0){
        cout << x << endl;
        }
    x++;
  } while (x <= 20);

	// print the even numbers till 20
	return 0;
}
