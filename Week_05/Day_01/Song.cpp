/*
 * Song.cpp
 *
 *  Created on: Nov 11, 2016
 *      Author: Kinga
 */

#include "Song.h"


Song::Song(std::string title, std::string artist) {
  this->title = title;
  this->artist = artist;
  this->rating = rating;
  float sum_rating = 0;
  unsigned int rating_counter = 0;
}

bool Song::if_rating_valid(unsigned int rating) {
  return 1 <= rating && rating <= 5;
}

float Song::get_avg_rating() {
  return sum_rating / rating_counter;
}

std::string Song::get_title() {
  return title;
}

std::string Song::get_artist() {
  return artist;
}

unsigned int Song::get_rating() {
  return rating;
}

Song::~Song() {

}

