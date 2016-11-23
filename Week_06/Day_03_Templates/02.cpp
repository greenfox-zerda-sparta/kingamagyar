#include <iostream>
#include <string>

using namespace std;

template <class arr>

void swap(arr& array) {
  int new_third = array[2] += array[0];
  cout << new_third << endl;
}

int main() {
	// create a function template that takes fix long array
	// and add the 1st element of it to the third
  int my_array[4] = {8, 4, 2, 45};
  swap(my_array);
  return 0;
}
