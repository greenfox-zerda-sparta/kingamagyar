/*
 * Rock.h
 *
 *  Created on: Nov 14, 2016
 *      Author: Kinga
 */

#ifndef ROCK_H_
#define ROCK_H_
#include "Song.h"

class Rock : public Song {
private:
  std::string genre;
public:
  Rock(std::string title, std::string artist);
  int to_rate(unsigned int rating);
  virtual ~Rock();
};

#endif /* ROCK_H_ */
