/*
 * Rock.cpp
 *
 *  Created on: Nov 14, 2016
 *      Author: Kinga
 */

#include "Rock.h"

Rock::Rock(std::string title, std::string artist) : Song(title, artist) {
  this->genre = "Rock";
}

int Rock::to_rate(unsigned int rating) {
  if (if_rating_valid(rating) != 0) {
    if (rating == 1) {
        std::cout << "No way, a rock song cannot be rated 1!!" << std::endl;
        return false;
  }
    Song::sum_rating += rating;
    Song::rating_counter++;
  }
  return if_rating_valid(rating);
}

Rock::~Rock() {
}

