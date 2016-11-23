#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <class T>
double sum_elements(T arr[]) {
  T sum = 0;
  T length = sizeof(arr)/sizeof(*arr);
  for(int i = 0; i < length; i++) {
    sum += arr[i];
  }
  return sum;
}

template <>
double sum_elements<char> (char arr[]) {
  int sum = 0;
  int length = sizeof(arr)/sizeof(arr[0]);
  const char* abc = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < length; i++) {
    sum += strchr(abc, arr[i]);
  }
  return sum;
}

int main() {
  // Create a function template that takes an array, and its length and return the sum of his elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet

  int my_array[7] = {3, 7, 10, 5, 8, 17, 2};
  char my_char_array [7] = {'a','b','c','d','e','y','z'};
  cout << "Sum of the elements in the array: " << sum_elements<int>(my_array) << endl;
  cout << "Sum of the characters' int position: " << sum_elements<char>(my_char_array) << endl;
  return 0;
}
