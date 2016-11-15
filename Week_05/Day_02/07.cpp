#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void add_string(string file_name, string content);

int main() {
  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter
  add_string("seventh-exercise.txt", "Janos");
  return 0;
}

void add_string(string file_name, string content) {
  ofstream file;
  file.open(file_name, ios::app); //added "ios::app" to put the string at the end of the file content

  file << "\n" << content << endl;
  file.close();
}
