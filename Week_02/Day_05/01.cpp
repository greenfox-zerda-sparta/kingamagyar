//============================================================================
// Name        : 01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;


void create_palindrome(string& word) {
  for (int i = word.length()-1; i >= 0; i--) {
      word += word[i];
    }
	  cout << word;
}

int main() {
  // Create a function that takes a string and creates a palindrome from it.
  string input;
  cout << "Please enter a word: ";
  cin >> input;
  create_palindrome(input);
  return 0;
}
