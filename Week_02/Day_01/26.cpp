//============================================================================
// Name        : 26.cpp
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

  for(int x = 1 ; x != 101 ; x++) {
		if(x%3 == 0 && x%5 == 0) {
			cout << "FizzBuzz" << endl;
		} else if(x%3 == 0) {
			cout << "Fizz" << endl;
		} else if(x%5 == 0) {
			cout << "Buzz" << endl;
		} else {
			cout << x << endl;
		}
	}

  cout << "\nWith while:" << endl;
  int x = 1;
  while(x <= 100){
    if(x%3 == 0 && x%5 == 0) {
          cout << "FizzBuzz" << endl;
        } else if(x%3 == 0) {
          cout << "Fizz" << endl;
        } else if(x%5 == 0) {
          cout << "Buzz" << endl;
        } else {
          cout << x << endl;
        }
    x++;
  }

  cout << "\nWith do while:" << endl;
  x = 1;
  do {
    if(x%3 == 0 && x%5 == 0) {
              cout << "FizzBuzz" << endl;
            } else if(x%3 == 0) {
              cout << "Fizz" << endl;
            } else if(x%5 == 0) {
              cout << "Buzz" << endl;
            } else {
              cout << x << endl;
            }
    x++;
  } while(x <= 100);

	// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".
	return 0;
}
