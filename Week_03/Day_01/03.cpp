#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it should print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {
  int* pointer = NULL;
  int input;
  int sum = 0;

  cout << "How many numbers are you going to enter? ";
  cin >> input;

  pointer = new int[input];

  for (int i = 0; i < input; i++) {
    cout << "Please enter number " << i + 1 << endl;
    cin >> pointer[i];
  }

  cout << "The average of the numbers you have entered is ";

  for (int i = 0; i < input; i++) {
    sum += pointer[i];
  }

  cout << sum / input;

  delete[] pointer;
  pointer = nullptr;

  return 0;
}
