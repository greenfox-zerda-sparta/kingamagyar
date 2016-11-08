/*
 * Car.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: Kinga
 */

#include "Car.h"
#include <iostream>

Car::Car(string type, double km) {
  this->type = type;
  this->km = km;
}

void Car::run(double num) {
  cout << km + num;
}
