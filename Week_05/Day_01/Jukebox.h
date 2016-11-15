/*
 * Jukebox.h
 *
 *  Created on: Nov 14, 2016
 *      Author: Kinga
 */

#ifndef JUKEBOX_H_
#define JUKEBOX_H_
#include "Song.h"

class Jukebox {
private:
  Song** songs;
  unsigned int song_counter;
public:
  Jukebox();
  void set_song(Song& song);
  void rate(std::string title, std::string artist, unsigned int rating);
  float get_artist_rating(std::string artist);
  virtual ~Jukebox();
};

#endif /* JUKEBOX_H_ */
