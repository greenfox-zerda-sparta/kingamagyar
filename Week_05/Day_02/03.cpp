#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "third-exercise.txt"
  // Write numbers from 0 to 20 into the file each in a new line
  ofstream thirdFile("third-exercise.txt");
  int num;
  for (num = 0; num < 21; num++) {
	  thirdFile << num << endl;
  }
  thirdFile.close();
  return 0;
}
