/*
 * Circle.h
 *
 *  Created on: Nov 8, 2016
 *      Author: Kinga
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
// Create a `Circle` class that takes it's radius as constructor parameter

using namespace std;

class Circle {
  private:
    unsigned int radius;
  public:
    Circle(unsigned int radius);
    int get_circumference();
    int get_area();
};

#endif /* CIRCLE_H_ */
