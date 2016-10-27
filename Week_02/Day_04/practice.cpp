//============================================================================
// Name        : practice.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int my_array [] = {1, 2, 3, 4, 5};
  int* pointer = &my_array[0]; //the address of element 0, instead we can write only int* pointer = my_array;

  cout << sizeof(my_array) / sizeof(my_array[0]) << endl; //give the number of elements in the array
  cout << sizeof(my_array) / sizeof(*my_array) << endl; //modifies in the background to a pointer type and it points to the first variable in the array
  cout << *my_array << endl; // points to the first element in the array
  cout << sizeof(pointer) / sizeof(int);
  return 0;
}
