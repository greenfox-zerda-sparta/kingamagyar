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
    Shape(float _w, float _h);
    virtual string getName() = 0;
    void setWidth(float _width);
    float getWidth();
    void setHeight(float _height);
    float getHeight();
    float getArea();
    virtual ~Shape();  //This is virtual, so the child classes can override this and create their own destructors.
  protected:
    float mArea;   //In order to be able to reach this from the virtual functions for calcuateArea()
    virtual void calculateArea() = 0;
  private:
    float mWidth;
    float mHeight;
};

#endif /* SHAPE_H_ */
