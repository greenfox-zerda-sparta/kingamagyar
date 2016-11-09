/*
 * Shape.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: Kinga
 */
#include <iostream>
#include "Shape.h"

Shape::Shape(float _w, float _h) {
  this->mWidth = _w;
  this->mHeight = _h;
}

Shape::~Shape() {

}

void Shape::setWidth(float _width) {
  this->mWidth = _width;
  this->calculateArea();  //This makes sure, that whenever I update the width or the height, the area gets recalculated.
}

void Shape::setHeight(float _height) {
  this->mHeight = _height;
  this->calculateArea();  //This makes sure, that whenever I update the width or the height, the area gets recalculated.
}

float Shape::getWidth() {
  return this->mWidth;
}

float Shape::getHeight() {
  return this->mHeight;
}

float Shape::getArea() {
  return this->mArea;
}


