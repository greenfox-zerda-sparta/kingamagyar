#include <iostream>
#include <string>

using namespace std;

string remove_x(string& s, unsigned int num) {
  if (num == s.size()) {
    return s;
  } else {
    if (s[num] == 'x') {
      s[num] = 0;
      return remove_x(s, num + 1);
    } else {
      return remove_x(s, num + 1);
    }
  }
}

int main() {
  // Given a string, compute recursively a new string where all the 'x' chars have been removed.
  string str = "Hxoxlxixdxaxy!";
  cout << "Before change: " << str << endl;
  cout << "After change: " << remove_x(str, 0) << endl;
  return 0;
}
