#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segment in a new try-catch block.

string measure(int a) throw (int, const char*) {
  const char* sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};
  if (a > 5) {
    throw (a - 5);
  } else if (a < 0) {
    throw "Dude, it's a negative number!";
  } else {
    return sentence[a];
  }
}

int main() {
  try {
    cout << "The second element: " << measure (2) << endl;
    cout << "The fifth element: " << measure(5) << endl;
    cout << measure(8) << endl;
  }
  catch (int high_num) {
      cout << "Exception, it's higher than the allowed value by " << high_num << endl;
  }
  catch (const char* negative) {
    cout << "Exception: " << negative << endl;
  }
  try {
      cout << measure(-1) << endl;
    }
    catch (const char* negative) {
      cout << "Exception: " << negative << endl;
    }
  return 0;
}

