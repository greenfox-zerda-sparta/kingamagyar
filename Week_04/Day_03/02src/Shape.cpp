/*
 * Shape.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: Kinga
 */
#include <iostream>
#include "Shape.h"

Shape::Shape(){

}

string* Shape::getName() {
      return new string("Generic Shape");
}

Shape::~Shape() {

}

