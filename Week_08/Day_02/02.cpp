#include <iostream>
#include <vector>

using namespace std;

// create a function that prints a vector using iterators

void print(vector<int> vec, vector<int>::iterator it) {
  for (it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << endl;
  }
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  
  vector<int>::iterator it;
  print(v, it);
  
  return 0;
}
