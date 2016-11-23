#include <iostream>
#include <string>

using namespace std;

template <class A, class B>
  A more_bytes(A type1, B type2) {
  cout << "Size of type 1: " << sizeof(type1) << endl;
  cout << "Size of type 2: " << sizeof(type2) << endl;
  cout << "The bigger is: ";
  return (sizeof(type1) > sizeof(type2) ? sizeof(type1) : sizeof(type2));
}

int main() {
  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then
  int x = 25;
  string y = "one";
  cout << more_bytes(x, y) << endl;
  return 0;
}
