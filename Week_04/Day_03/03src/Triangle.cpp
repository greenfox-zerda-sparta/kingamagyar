/*
 * Triangle.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: Kinga
 */

#include "Shape.h"
#include "Triangle.h"

Triangle::Triangle(float _w, float _h) : Shape(_w, _h) { //nincs default constructora a Shape-nek, ezert meghivom ezt
  this->calculateArea();  //Ami a shape-hez tartozik azt a shape constructorabol hozd letre
}

Triangle::~Triangle() {
}

void Triangle::calculateArea() {
  this->mArea = this->getWidth() * this->getHeight() / 2;
}

string Triangle::getName() {
  return string("Triangle");
}

