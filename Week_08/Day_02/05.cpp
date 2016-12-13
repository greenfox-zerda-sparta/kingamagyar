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

void print_pairs(vector<string>& vec1, vector<string>& vec2) {
  random_shuffle(vec1.begin(), vec1.end());
  random_shuffle(vec2.begin(), vec2.end());
  for (unsigned int i = 0; i < vec1.size(); i++) {
    for (unsigned int j = i; j < i+1; j++) {
      if(vec1[i] == vec2[j]) {
        random_shuffle(vec2.begin(), vec2.end());
      } else {
      cout << vec1[i] << " - " << vec2[j] << endl;
      }
    }
  }
}

void secret_santa() {
  vector<string> names;
  vector<string> names2;
  string input;
  cout << "Input the names in your class, so I can make Secret Santa pairs! (press 'q' if you're done)" << endl;
  while(cin >> input) {
    if (input == "q") {
      break;
    }
    names.push_back(input);
    names2.push_back(input);
    cout << "Input the next name or press 'q' if you're done: " << endl;
  }
  print_pairs(names, names2);
}

int main() {
  secret_santa();
  
  return 0;
}
