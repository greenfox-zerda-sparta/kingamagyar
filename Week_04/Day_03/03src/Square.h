/*
 * Square.h
 *
 *  Created on: Nov 9, 2016
 *      Author: Kinga
 */

#ifndef SQUARE_H_
#define SQUARE_H_
#include "Shape.h"

class Square: public Shape {
  public:
    Square(float _w, float _h);
    virtual string getName();
    virtual ~Square();
  protected:
    virtual void calculateArea();
};

#endif /* SQUARE_H_ */
