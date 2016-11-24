#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create an integer vector with the size of 5 and print the 3rd element of it
  vector<int> my_vector(1);
  my_vector.push_back(24);
  my_vector.push_back(55);
  my_vector.push_back(3);
  my_vector.push_back(17);
  my_vector.push_back(8);

  cout << my_vector[2];
  return 0;
}
