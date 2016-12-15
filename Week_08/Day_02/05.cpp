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

void create_pairs(vector<string>& vec1, vector<string>& vec2) {
  for (unsigned int i = 0; i < vec1.size(); i++) {
    cout << vec1[i] << " - " << vec2[i] << endl;
  }
}

bool is_correct_pair(vector<string>& vec1, vector<string>& vec2) {
  random_shuffle(vec2.begin(), vec2.end());
  for (unsigned int i = 0; i < vec1.size(); i++) {
    if (vec1[i] == vec2[i]) {
      return false;
    }
  }
  return true;
}

void vector_shuffle(vector<string>& vec1, vector<string>& vec2) {
  while (!is_correct_pair(vec1, vec2)) {
    random_shuffle(vec2.begin(), vec2.end());
  }
  create_pairs(vec1, vec2);
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
  vector_shuffle(names, names2);
}

int main() {
  secret_santa();
  
  return 0;
}
