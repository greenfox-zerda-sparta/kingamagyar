#include <iostream>

using namespace std;

/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's parameters.
 * It should take 3 parameters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 4, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */

int size(int from, int to, int step) {
  return (to - from) / step;
}

int* range(int from, int to, int step) {
  int* array = new int[size(from, to, step)];
  for (int i = 0; i < size(from, to, step); i++) {
    array[i] = from + i * step;
  }
  return array;
}

int main() {
  int from = 1, to = -8, step = -3;
  int* arr = range(from, to, step);

  for (int i = 0; i < size(from, to, step); i++) {  //print out the content of the array
    cout << arr[i] << endl;
  }

  delete[] arr;
  arr = nullptr;

  return 0;
}
