#include <iostream>
#include <string>
#include <vector>


using namespace std;

void increase_element(vector< vector<int> >& vec, unsigned x, unsigned y) {
  vec[x][y] += 1;
}

void print_vector_of_vector(vector< vector<int> >& vec) {
  for (unsigned int i = 0; i < vec.size(); i++) {
    cout << "Number " << (i + 1) << " vector elements: ";
    for (unsigned int j = 0; j < ((vector<int>)vec[i]).size(); j++) {
      cout << vec[i][j] << ' ';
    }
    cout << endl;
  }
}

int main() {
	//create a vector of vector of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector
	//create a function which increase a specific element of an inner vector by 1
  vector< vector<int> > v(5, vector<int> (5, 0));
  increase_element(v, 3, 2);
  print_vector_of_vector(v);
  return 0;
}
