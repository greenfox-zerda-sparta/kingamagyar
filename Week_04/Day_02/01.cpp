#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21
  Student sObject;
  sObject.name = "John";
  sObject.age = 21;
  cout << "The name of the student is " << sObject.name << " and the age is " << sObject.age << endl;
  return 0;
}
