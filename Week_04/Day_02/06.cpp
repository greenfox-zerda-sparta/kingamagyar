#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main() {
    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area
  Circle circle1(38);
  cout << "It's circumference is " << circle1.get_circumference() << endl;
  cout << "It's area is " << circle1.get_area() << endl;
  return 0;
}
