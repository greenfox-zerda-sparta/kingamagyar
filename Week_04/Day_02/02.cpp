#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21 with it's constructor
  Student sObject("John", 21);
  cout <<"The name is " << sObject.name << " and the age is " << sObject.age << endl;
  return 0;
}
