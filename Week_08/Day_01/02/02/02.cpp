// Create a constant using a preprocessor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.

#define FLOAT 0.002
float float1(FLOAT);
#undef FLOAT
#define FLOAT 77.99
float float2(FLOAT);

#include <iostream>

using namespace std;

int main() {
  cout << float1 << endl;
  cout << float2 << endl;
  return 0;
}
