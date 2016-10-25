//============================================================================
// Name        : 11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void append(string word) {
  cout << word + "a";
}

int main() {
  string k = "kuty";
  // write a function that gets a string as an input
  // and appends an 'a' character to its end
  append(k);
}
