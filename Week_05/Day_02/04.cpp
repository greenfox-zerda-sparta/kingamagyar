#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Open a file called "fourth-exercise.txt"
  // Print all of its lines to the terminal window
  ifstream fourthFile("fourth-exercise.txt");

  string fruit;

  while(fourthFile >> fruit) {
	  cout << fruit << endl;
  }

  fourthFile.close();
  return 0;
}
