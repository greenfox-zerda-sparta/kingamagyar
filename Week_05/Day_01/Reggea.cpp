/*
 * Reggea.cpp
 *
 *  Created on: Nov 14, 2016
 *      Author: Kinga
 */

#include "Reggea.h"

Reggea::Reggea(std::string title, std::string artist) : Song(title, artist) {
  this->genre = "Reggea";
}

int Reggea::to_rate(unsigned int rating) {
  if (if_rating_valid(rating) != 0) {
    if (rating == 5) {
        std::cout << "Even though it's a great song, a reggea song cannot be rated 5..." << std::endl;
        return false;
  }
    Song::sum_rating += rating;
    Song::rating_counter++;
  }
  return if_rating_valid(rating);
}

Reggea::~Reggea() {
}

