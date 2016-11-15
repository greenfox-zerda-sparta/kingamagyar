/*
 * Pop.cpp
 *
 *  Created on: Nov 14, 2016
 *      Author: Kinga
 */

#include "Pop.h"

Pop::Pop(std::string title, std::string artist) : Song(title, artist) {
  this->genre = "Pop";
}

Pop::~Pop() {
}

