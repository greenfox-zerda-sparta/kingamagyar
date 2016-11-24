#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fillVector(vector<char>& v) {
  cout << "Please give me a list of characters, baby (press ~ to stop): ";
  char input;
  cin >> input;

  while (input != '~') {
    v.push_back(input);
    cin >> input;
  }
  cout << endl;
}


int main() {
	//create a vector of chars with the size of zero;
	//write a function where the user can add characters to the end of this vector
  vector<char> v(0);
  fillVector(v);
  cout << "Your vector looks like this: ";
  unsigned size = v.size();
  for (unsigned i = 0; i < size; i++) {
    cout << v[i] << " ";
  }
  return 0;
}
