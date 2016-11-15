#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string display_content(string file_name);

int main() {
  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter
  cout << display_content("sixth-exercise.txt") << endl;
  return 0;
}

string display_content(string file_name) {
  ifstream file;
  file.open(file_name.c_str());
  string content;
  string line;

  while (file >> line) {
    content = content + line + "\n";
	}
  file.close();
  return content;
}
