#ifndef GUESSES_HPP_
#define GUESSES_HPP_

#include <iostream>
#include <vector>
#include "SecretNumber.hpp"

class Guesses {
private:
  unsigned int bulls;
  unsigned int cows;
public:
  Guesses();
  std::vector<int> number_to_vector(int num);
  void check_guesses(std::vector<int> guess, std::vector<int> secret_number);
  unsigned int get_bulls();
  unsigned int get_cows();
  virtual ~Guesses();
};

#endif /* GUESSES_HPP_ */
