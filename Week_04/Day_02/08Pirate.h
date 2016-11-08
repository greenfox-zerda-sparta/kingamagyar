/*
 * Pirate.h
 *
 *  Created on: Nov 8, 2016
 *      Author: Kinga
 */


#define PIRATE_H_
#include <string>

using namespace std;

class Pirate {
  private:
    unsigned int bottles_of_rum;
  public:
    Pirate(unsigned int bottles_of_rum);
    int drink_rum();
    string hows_goin_mate();
};
