// Define 3 constants using a macro directive.
// One integer, one float and one string of characters.
// Print them out to the console in Your main funciton.

#define INTEGER 100
#define FLOAT 89.65
#define str(x) #x
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
  cout << INTEGER << endl;
  cout << FLOAT << endl;
  cout << str(hello) << endl;
  return 0;
}
