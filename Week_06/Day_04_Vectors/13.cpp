#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fillVector(vector< vector<int> >& vec) {
  for (unsigned i = 0; i < vec.size(); i++) {
    for (unsigned j = 0; j < vec[i].size(); j++) {
      if (i == j) {
        vec[i][j] = 1;
      }
      cout << vec[i][j] << ' ';
    }
    cout << endl;
  }
}

void extendVector (vector< vector<int> >& vec) {
  for (unsigned i = 0; i < vec.size(); i++) {
    for (unsigned j = 0; j < vec[i].size(); j++) {
      if (i == 0) {
        vec[i][j] = 1;
      } else if (i == j && i != 0) {
        vec[i][j] = 1;
      }
      cout << vec[i][j] << ' ';
    }
    cout << endl;
  }
}

int main() {
  //Create a 2 dimensional vector with matrix!
  // 1 0 0 0
  // 0 1 0 0
  // 0 0 1 0
  // 0 0 0 1
  // Extend it to the following format:
  // 1 1 1 1 1
  // 0 1 0 0 1
  // 0 0 1 0 1
  // 0 0 0 1 1
  // 0 0 0 0 1
  // Mirror it horizontally!
  // Mirror it vertically!

  vector< vector<int> > v(4, vector<int> (4));
  cout << "Original vector matrix: " << endl;
  fillVector(v);
  cout << "\nExtended vector matrix: " << endl;
  extendVector(v);
  return 0;
}
