#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
    void change_name(string name1) {
          name = name1;
        }
    string greet() {
      return "Hello my name is: " + this->name;
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property
  Student student1("Leo", 23);
  cout << student1.greet();
  return 0;
}
