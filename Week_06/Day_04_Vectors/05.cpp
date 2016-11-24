#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create a vector of integers with the size of 10, fill them with random numbers
	//create a vector of doubles and reserve place for 10 items
	//push an item to the end of the vector with the double places
	//print which vectors size is higher (and why?)
  vector<int> v(10);
  cout << "Elements of int vector: ";
  for (unsigned i = 0; i < 10; i++) {
    int num = rand() % 11;
    v.push_back(num);
    v[i] = num;
    cout << v[i] << " ";
  }
  cout << "\nSize: " << v.size();
  cout << endl;

  vector<double> d_v;
  d_v.reserve(10);
  d_v.push_back(32.44);
  cout << "Elements of double vector: ";
  for (unsigned i = 0; i < 10; i++) {
    cout << d_v[i] << " ";
  }
  cout << "\nSize: " << d_v.size(); //Here we only reserved 10 places, but the size is 1, because it contains 1 value.

  return 0;
}
