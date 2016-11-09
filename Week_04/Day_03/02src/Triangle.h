/*
 * Triangle.h
 *
 *  Created on: Nov 9, 2016
 *      Author: Kinga
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Shape.h"

class Triangle: public Shape {
  public:
    Triangle();
    string* getName();
    virtual ~Triangle();
};

#endif /* TRIANGLE_H_ */
