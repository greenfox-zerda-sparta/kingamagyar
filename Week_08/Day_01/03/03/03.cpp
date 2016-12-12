// Create a constant using preprocessor directives.
// Make it so, that depending on the existence of a defined variable
// it's value is different.
// Write a main function that writes it to the console.
// Experiment in Your IDE compiling it with the directive defined or not.
// (This is what we used -D __DEBUG for example. You can try this and see how it works
// when You compile a Debug version and a Release version.)

#ifdef SHORT_LIST
#define LIST_LENGTH 20
#else
#define LIST_LENGTH 800
#endif

#include <iostream>
using namespace std;

int main() {
  cout << LIST_LENGTH << endl;
  return 0;
}
