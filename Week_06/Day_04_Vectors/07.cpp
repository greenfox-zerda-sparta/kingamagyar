#include <iostream>
#include <string>
#include <vector>

using namespace std;

void remove_even_numbers(vector<int>& new_v) {
  unsigned size = new_v.size();
  for (unsigned i = size-1; i > 0; i--) {
    if (new_v[i] % 2 == 0) {
      new_v.erase(new_v.begin() + i);
    }
  }
}

int main() {
	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
	//remove the even numbers, then print the items again
  vector<int> v(20);
  unsigned size = v.size();
  cout << "Original vector: ";
  for (unsigned i = 0; i < size; i++) {
    int num = rand() % 11;
    v.push_back(num);
    v[i] = num;
    cout << v[i] << " ";
  }
  cout << endl;
  cout << "Removed even numbers: ";
  remove_even_numbers(v);
  for (unsigned i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
