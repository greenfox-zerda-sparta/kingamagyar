#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(vector<char>& v) {
  for (unsigned i = 0; i < v.size(); i++) {
    cout << v[i];
  }
}

int main() {
	//create a vector of characters with the size of 8
	//ask the user to fill this vector with characters one by one
	//at the end make sure the vector holds the letters of "GREENFOX"
	//so correct the user if he/she gives a different letter from the one we want them to give :)
  vector<char> v(8);
  string fox = "greenfox";
  char input;
  for (unsigned i = 0; i < v.size(); i++) {
    cout << "Please give in a character to spell GREENFOX: ";
    cin >> input;
    cout << "You have entered \"" << input << "\".\n";
    if (input != fox[i]) {
      cout << "\nIt's an incorrect character, you have to spell GREENFOX!\n";
      i--;
    } else {
      v[i] += input;
    }
  }
  cout << "You have successfully entered: ";
  print(v);

  return 0;
}
