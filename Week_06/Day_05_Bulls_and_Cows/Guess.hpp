#ifndef GUESS_HPP_
#define GUESS_HPP_
#include <iostream>
#include <vector>

class Guess {
private:
  int bulls;
  int cows;
public:
  Guess();
  void check_guess(std::vector<int> guess, std::vector<int> random_number);
  void set_bulls(int num);
  int get_bulls();
  void set_cows(int num);
  int get_cows();
  void player_wins();
  void print_result();
};

#endif /* GUESS_HPP_ */
