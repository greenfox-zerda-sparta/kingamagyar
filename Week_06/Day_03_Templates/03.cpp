#include <iostream>
#include <string>

using namespace std;

template <class P>
int print_array(P arr[], P num) {
  return arr[num];
}

int main() {
	// create a function template which takes in an array, and the size of it
	// print all the elements of the array
  int my_array[5] = {72, 85, 24, 55, 12};
  print_array(my_array, 5);
  for(int i = 0; i < 5; i++) {
    cout << my_array[i] << endl;
  }
  return 0;
}
