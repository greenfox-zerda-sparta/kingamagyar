#include <iostream>
#include <string>
#include <map>

using namespace std;

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string

map<string, int> modify(string a) {
  map<string, int> m;
  m [a] = a.size();
  map<string, int>::iterator it;
  for(it = m.begin(); it != m.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }
  return m;
}

int main() {
  string a = "alma";
  modify(a);
  
  return 0;
}
