//============================================================================
// Name        : 13.cpp
// Author      : Kinga
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

// Create a function that prints each word in a string into a new line!
// Create an other function that takes a string and an array of strings as it's input
// and puts each word in the original string into a new element in the array of strings.
// Decide which argument should be a pointer and which shouldn't.
// In the main function, print out each element of the array into a new line!

int print_word(string sentence) {
  for(int i = 0; i < sentence.length(); i++) {
	if (sentence[i] != ' ') {
      cout << sentence[i];
	} else if (sentence[i] == ' ') {
	  cout << endl;
	}
  }
  return 0;
}

int main(int argc, char **argv){
  string words = "Joe likes hamburgers.";
  print_word(words);
  return 0;
}
