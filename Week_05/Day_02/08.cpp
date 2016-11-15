#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

bool copy_file(string file_name1, string file_name2);

int main() {
  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful
  cout << copy_file("file1.txt", "file2.txt") << endl;
  return 0;
}

bool copy_file(string file_name1, string file_name2) {
  ifstream file1(file_name1);
  string line;
  stringstream buffer;

  if(!file1.is_open()) {
    false;
  }
  buffer << file1.rdbuf();
  line = buffer.str();
  file1.close();

  ofstream file2(file_name2);
  if (!file2.is_open()) {
    false;
  }
  file2 << line;
  file2.close();
  return true;
}
