/*
 * Song.h
 *
 *  Created on: Nov 11, 2016
 *      Author: Kinga
 */

#ifndef SONG_H_
#define SONG_H_
#include <iostream>

class Song {
  private:
    std::string title;
    std::string artist;
  protected:
    unsigned int rating;
    float sum_rating;
    unsigned int rating_counter;
  public:
    Song(std::string title, std::string artist);
    virtual int to_rate(unsigned int rating) = 0;
    bool if_rating_valid(unsigned int rating);
    float get_avg_rating();
    void set_rating();
    std::string get_title();
    std::string get_artist();
    unsigned int get_rating();
    ~Song();
};

#endif /* SONG_H_ */
