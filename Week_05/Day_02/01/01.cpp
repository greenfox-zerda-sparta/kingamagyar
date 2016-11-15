#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "first-exercise.txt"
  // Write your name in it as a single line
  ofstream firstFile("first-exercise.txt");
  firstFile << "Kinga Magyar\n";
  firstFile.close();
  return 0;
}
