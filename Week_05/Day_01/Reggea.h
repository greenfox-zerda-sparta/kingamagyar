/*
 * Reggea.h
 *
 *  Created on: Nov 14, 2016
 *      Author: Kinga
 */

#ifndef REGGEA_H_
#define REGGEA_H_
#include "Song.h"

class Reggea : public Song {
private:
  std::string genre;
public:
  Reggea(std::string title, std::string artist);
  int to_rate(unsigned int rating);
  virtual ~Reggea();
};

#endif /* REGGEA_H_ */
