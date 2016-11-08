/*
 * Car.h
 *
 *  Created on: Nov 8, 2016
 *      Author: Kinga
 */

#define CAR_H_
#include<string>

using namespace std;

class Car {
  private:
    string type;
    double km;
  public:
    Car(string type, double km);
    void run(double num);
};
