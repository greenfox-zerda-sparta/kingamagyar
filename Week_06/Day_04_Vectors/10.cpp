#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	//find how much integer divisor 2400 has
	//create a vector of doubles, reserve place for the divisors of 2400
	//fill this places with random numbers from 0 to 2400
	//sort them in ascending order

  int divisor_number = 0;
  for (unsigned i = 1; i < 2401; i++) {
    if (2400 % i == 0) {
      divisor_number++;
    }
  }
  cout << "2400 has " << divisor_number << " divisors." << endl;

  vector<double> v(36);
  cout << "The 36 random elements in the vector: ";
  for (unsigned i = 0; i < 36; i++) {
    int num = rand() % 2401;
    v.push_back(num);
    v[i] = num;
    cout << v[i] << " ";
  }

  cout << "\nThe 36 random elements in ascending order: ";
  sort(v.begin(), v.end());
  for (unsigned i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  return 0;
}
