/*
 * Song.cpp
 *
 *  Created on: Nov 11, 2016
 *      Author: Kinga
 */

#include "Song.h"
using namespace std;

Song::Song() {
  this->title = title;
  this->artist = artist;
  this->rating = rating;
}

float sum_rating = 0;
unsigned int rating_counter = 0;

int Song::to_rate(unsigned int rating) {
  if (if_rating_valid(rating) != 0) {
    sum_rating += rating;
    rating_counter++;
  }
  return if_rating_valid(rating);
}

bool Song::if_rating_valid(unsigned int rating) {
  return 1 <= rating && rating <= 5;
}

float Song::get_avg_rating() {
  return sum_rating / rating_counter;
}

Song::~Song() {

}

