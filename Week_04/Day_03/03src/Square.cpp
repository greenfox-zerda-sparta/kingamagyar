/*
 * Square.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: Kinga
 */

#include "Shape.h"
#include "Square.h"

Square::Square(float _w, float _h) : Shape(_w, _h) { //nincs default constructora a Shape-nek, ezert meghivom ezt
  this->calculateArea();  //Ami a shape-hez tartozik azt a shape constructorabol hozd letre
}

Square::~Square() {
}

void Square::calculateArea() {
  this->mArea = this->getWidth() * this->getHeight() / 2;
}

string Square::getName() {
  return string("Square");
}

