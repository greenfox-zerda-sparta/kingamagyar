#include <iostream>
#include <string>
#include <vector>

using namespace std;

void increase_inner_vector(vector< vector<int> >& vec) {
  for (unsigned i = 0; i < vec.size(); i++) {
    for (unsigned j = 0; j < vec[i].size(); j++) {
      vec[i][j] += 1;
    }
  }
}

void print_vector_of_vector(vector< vector<int> >& vec) {
  for (unsigned int i = 0; i < vec.size(); i++) {
    cout << "Number " << (i + 1) << " vector elements: ";
      for (unsigned int j = 0; j < vec[i].size(); j++) {
        cout << vec[i][j] << " ";
      }
    cout << endl;
  }
}

int main() {
	//create a vector of vector of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector
	//create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)
  vector< vector<int> > v(5, vector<int> (5, 0));
  increase_inner_vector(v);
  print_vector_of_vector(v);
  return 0;
}
