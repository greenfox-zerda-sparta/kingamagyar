#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe

void print_pairs(vector<string>& vec) {
  random_shuffle(vec.begin(), vec.end());
  for (vector<string>::iterator it = vec.begin(); it != vec.end(); it+=2) {
    cout << *it << " - " << *(it+1) << endl;
  }
}

void secret_santa() {
  vector<string> names;
  string input;
  cout << "Input the names in your class, so I can make Secret Santa pairs! (press 'q' if you're done)" << endl;
  while(cin >> input) {
    if (input == "q") {
      break;
    }
    names.push_back(input);
    cout << "Input the next name or press 'q' if you're done: " << endl;
  }
  print_pairs(names);
}

int main() {
  secret_santa();
  
  return 0;
}
