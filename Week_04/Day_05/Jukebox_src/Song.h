/*
 * Song.h
 *
 *  Created on: Nov 11, 2016
 *      Author: Kinga
 */

#ifndef SONG_H_
#define SONG_H_
#include <string>

class Song {
  private:
    std::string title;
    std::string artist;
  protected:
    unsigned int rating;
  public:
    Song();
    int to_rate(unsigned int rating);
    bool if_rating_valid(unsigned int rating);
    float get_avg_rating();
    void set_rating();
    ~Song();
};

#endif /* SONG_H_ */
