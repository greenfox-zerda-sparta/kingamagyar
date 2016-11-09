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
    Square();
    string* getName();
    virtual ~Square();
};

#endif /* SQUARE_H_ */
