#include <iostream>
#include <string>

using namespace std;

string separate_by_asterisk(string& s, unsigned int num) {
  if (num >= s.length()) {
    return s;
  }
  if (s[num] == '*') {
    return separate_by_asterisk(s, num + 1);
  } else {
    s.insert(num + 1, 1, '*');
    return separate_by_asterisk(s, num + 1);
  }
}


int main() {
  // Given a string, compute recursively a new string where all the
  // adjacent chars are now separated by a "*".
  string str = "Happy happy happy!!!";
  cout << "Before change: " << str << endl;
  cout << "After change: " << separate_by_asterisk(str, 0) << endl;

  return 0;
}
