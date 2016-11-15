/*
 * Jukebox.cpp
 *
 *  Created on: Nov 14, 2016
 *      Author: Kinga
 */

#include "Jukebox.h"

Jukebox::Jukebox() {
  songs = 0;
  song_counter = 0;
}

void Jukebox::set_song(Song& song) {
  Song** temp = new Song*[song_counter + 1];
  if (songs != 0) {
    for (int i = 0; i < song_counter; i++) {
      temp[i] = songs[i];
    }
  }
  temp[song_counter] = &song;
  delete[] songs;
  songs = temp;
  song_counter++;
}

void Jukebox::rate(std::string title, std::string artist, unsigned int rating) {
  for (int i = 0; i < song_counter; i++) {
    if (title == songs[i]->get_title() && artist == songs[i]->get_artist()) {
      songs[i]->to_rate(rating);
    }
  }
}

float Jukebox::get_artist_rating(std::string artist) {
  unsigned int nb_artist_song = 0;
  float artist_rating = 0;
  for (int i = 0; i < song_counter; i++) {
    if (artist == songs[i]->get_artist()) {
      artist_rating += songs[i]->get_avg_rating();
      nb_artist_song++;
    }
  }
  return artist_rating / nb_artist_song;
}

Jukebox::~Jukebox() {
}

