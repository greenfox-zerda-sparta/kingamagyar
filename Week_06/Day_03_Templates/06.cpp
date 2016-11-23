#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <class T, class P>
double sum_elements(T arr[], P length) {
  T sum = 0;
  for(int i = 0; i < length; i++) {
    sum += arr[i];
  }
  return sum;
}

template <>
double sum_elements<char, int> (char arr[], int length) {
  int sum = 0;
  const char* abc = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < 26; j++) {
      if (arr[i] == abc[j]) {
        sum += j+1;
      }
    }
  }
  return sum;
}

int main() {
  // Create a function template that takes an array, and its length and return the sum of his elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet

  int my_array[7] = {3, 7, 10, 5, 8, 17, 2};
  char my_char_array [7] = {'a','b','c','d','e','y','z'};
  cout << "Sum of the elements in the array: " << sum_elements<int>(my_array, 7) << endl;
  cout << "Sum of the characters' int position: " << sum_elements<char, int>(my_char_array, 7) << endl;
  return 0;
}
