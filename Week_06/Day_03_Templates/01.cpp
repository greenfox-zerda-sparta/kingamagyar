#include <iostream>
#include <string>

using namespace std;

template <class arr>

void printStuff(arr& array) {
  cout << array << endl;
}

int main() {
	// create a function template the takes in a fix long array and prints the 1st element of it
  int my_array[5] = {11, 22, 33, 44, 55};
  printStuff(my_array[0]);
  return 0;
}
