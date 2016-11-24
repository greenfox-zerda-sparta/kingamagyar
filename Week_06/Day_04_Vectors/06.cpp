#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addValue(vector<double>& new_v) {
  double random_element = rand() % new_v.size();
  new_v.at(random_element) += new_v.back();
  new_v.erase(new_v.begin() + 29);
}

int main() {
	//create a vector of doubles with the size of 30, with every element equal of 1.5
	//create functions that takes this vector, pick the last element of it and adding its value to
	//an other item from the vector(this item place is random) and remove the last element at the end
	//run this function 20 times, then print every element of the vector
  vector<double> v(30, 1.5);
  cout << "My original vector: ";
  for (unsigned i = 0; i < 30; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  addValue(v);
  cout<< "Modified vector: ";
  for (unsigned i = 0; i < 30; i++) {
    cout << v[i] << " ";
  }
  return 0;
}
