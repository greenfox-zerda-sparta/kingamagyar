#include <iostream>
#include <string>

using namespace std;

string change_x_to_y(string& s, unsigned int num) {
  if (num == s.size()) {
    return s;
  } else {
    if (s[num] == 'x') {
      s[num] = 'y';
      return change_x_to_y(s, num + 1);
    } else {
      return change_x_to_y(s, num + 1);
    }
  }
}

int main() {
  // Given a string, compute recursively (no loops) a new string where all the
  // lowercase 'x' chars have been changed to 'y' chars.
  string s = "Merrx Christmas!";
  cout << "Before change: " << s << endl;
  cout << "After change: " << change_x_to_y(s, 0) << endl;
  return 0;
}
