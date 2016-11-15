#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "second-exercise.txt"
  // Read the content of the file and print it to the terminal window
  ifstream secondFile("second-exercise.txt");

  string fruit;

  while (secondFile >> fruit) {
	  cout << fruit << endl;
  }

  secondFile.close();

  return 0;
}
