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
    Triangle(float _w, float _h);
    virtual string getName();
    virtual ~Triangle();
  protected:
    virtual void calculateArea();
};

#endif /* TRIANGLE_H_ */
