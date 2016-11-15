#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Write a program that prints a content of a file called "fifth-exercise.txt"
  // If it could not open the file it should write: "Could not open the file" to the standard error
  // The program should return 2 if there where an error
  ifstream fifthFile("fifth-exercise.txt");

  string content;

  if(!fifthFile.is_open()) {
	  cerr << "Could not open the file, you messed up!" << endl;
	  return 2;
  } else {
	  while (fifthFile >> content) {
		  cout << content << endl;
	  }
  }

  fifthFile.close();
  return 0;
}
