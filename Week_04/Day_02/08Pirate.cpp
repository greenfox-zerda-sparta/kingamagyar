/*
 * Pirate.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: Kinga
 */

#include "Pirate.h"

using namespace std;

Pirate::Pirate(unsigned int bottles_of_rum) {
  this->bottles_of_rum = bottles_of_rum;
}

int Pirate::drink_rum() {
  return bottles_of_rum++;
}

string Pirate::hows_goin_mate() {
  if (bottles_of_rum <= 5) {
    return "Nothin'";
  } else {
    return "Arrrr!";
  }
}
