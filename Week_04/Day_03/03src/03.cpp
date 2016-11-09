// Add a variable to the Shape class. Make it "protected".
//    This should be called mArea.
// Create a function that calculates the areas of the shape.
// Update the shapes Triangle and Square to have variables that represent their dimensions,
//   that you will need to calculate the area. One would be width, the other height.
// Implement getter and setter functions for them.
// Make sure to call the function that calculates the area and stores it in mArea,
//   in the setter functions.
// Create a constructor that takes the height and width as it's parameters.
// Create a destructor, that destructs the objects.
//
// Write code into the main function that uses these.
// Make sure it demonstrates how the class works by printing out the results.

#include <iostream>
#include <string>
#include "Shape.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

int main() {
  Shape* a = new Triangle(13.67, 42.5);
  Shape* b = new Square(87.2, 63.99);
  cout << "The shape is a " << a->getName() << ", it's area is " << a->getArea() << endl;
  cout << "The shape is a " << b->getName() << ", it's area is " << b->getArea() << endl;
  a->setHeight(20.6);
  cout << "I'm the same " << a->getName() << " but my new area size is " << a->getArea() << endl;
  b->setWidth(10.45);
  cout << "I'm the same " << b->getName() << " but my new area size is " << b->getArea() << endl;
  return 0;
}
