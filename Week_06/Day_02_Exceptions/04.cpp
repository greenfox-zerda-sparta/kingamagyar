#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two strings in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string cut(string a, unsigned int idx) throw (const char*) {
  if (idx > a.length()) {
    throw "The index is out of bound! Please give either a longer word or a smaller number.";
  }
  string first_part ="";
  string second_part ="";
  for (int i = 0; i < idx; i++) {
    first_part += a.at(i);
  }
  for (int i = idx; i < a.length(); i++) {
    second_part += a.at(i);
  }
  return "{ " + first_part + ", " + second_part + " }";
}

int main() {
  try {
    cout << cut("Perplexed", 3) << endl;
    cout << cut("Persevere", 23) << endl;
  }
  catch (const char* x) {
    cout << "Exception: " << x << endl;
  }
  return 0;
}
