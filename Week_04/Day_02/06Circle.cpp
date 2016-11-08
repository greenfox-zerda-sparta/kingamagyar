/*
 * Circle.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: Kinga
 */

#include "Circle.h"
#include <iostream>

Circle::Circle(unsigned int radius) {
  this->radius = radius;
}

int Circle::get_circumference() {
  return 2*3.14*radius;
}

int Circle::get_area() {
  return 3.14*radius*radius;
}
