#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the character is not in the string throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

vector <string> split_string(string str, char c) throw (const char*) {
  unsigned int arr_length = 1;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == c) {
      arr_length++;
    }
  }
  if (arr_length == 1) {
    throw "Nope, the character is not in the string!";
  }
  vector <string> output;
  string word = "";
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == c) {
      output.push_back(word);
      word = "";
    } else {
    word += str[i];
    }
  }
  output.push_back(word);
  return output;
}

int main() {
  try {
    vector <string> my_output;
    my_output = split_string("I wanna be on a beach...", 'b');
    for(int i = 0; i < my_output.size(); i++) {
      cout << "\"" << my_output[i] << "\", ";
    }
    cout << endl;

    vector <string> my_output2;
    my_output2 = split_string("When is lunch?", 'x');
  }
  catch (const char* exc) {
    cout << "Exception: " << exc << endl;
  }
  return 0;
}
