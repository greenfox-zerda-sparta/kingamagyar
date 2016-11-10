#include <iostream>
#include <string>
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a pointer.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*
//
class ParentClass {
  public:
	  string unique_string();
	  virtual string unique_string2();
};

string ParentClass::unique_string() {
  return "ParentClass' Unique string, NOT virtual";
}

string ParentClass::unique_string2() {
  return "ParentCalss' Virtual unique string";
}


class ChildClass : public ParentClass {
  public:
    string unique_string();
    virtual string unique_string2();
};

string ChildClass::unique_string() {
  return "ChildClass' unique string";
}

string ChildClass::unique_string2() {
  return "ChildClass' Virtual string";
}

int main() {
  ParentClass* a = new ChildClass();
  cout << a->unique_string() << endl;
  cout << a->unique_string2() << endl;
  cout << "AFTER CASTING: " << endl;
  cout << ((ChildClass*)a)->unique_string() << endl;
  cout << ((ChildClass*)a)->unique_string2() << endl;
}
