/*
 * Pop.h
 *
 *  Created on: Nov 14, 2016
 *      Author: Kinga
 */

#ifndef POP_H_
#define POP_H_
#include "Song.h"

class Pop : public Song {
private:
  std::string genre;
public:
  Pop(std::string title, std::string artist);
  virtual ~Pop();
};

#endif /* POP_H_ */
