/*
 * Shape.h
 *
 *  Created on: Nov 9, 2016
 *      Author: Kinga
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include <string>

using namespace std;

class Shape {
  public:
    Shape();
    virtual string* getName();
    virtual ~Shape();
};

#endif /* SHAPE_H_ */
