#include "Guesses.hpp"

Guesses::Guesses() {
  this->bulls = 0;
  this->cows = 0;
}

std::vector<int> Guesses::number_to_vector(int num){
  if (num < 1000 || num > 10000) {
    throw "Wrong number, it needs to have 4 digits!";
  }
  std::vector<int> vec(4);
  vec[0] = num/1000 % 10;
  vec[1] = num/100 % 10;
  vec[2] = num/10 % 10;
  vec[3] = num % 10;
  return vec;
}

void Guesses::check_guesses(std::vector<int> guess, std::vector<int> secret_number) {
  unsigned int b = 0;
  unsigned int c = 0;
  for (unsigned i = 0; i < 4; i++) {
    if (guess[i] == secret_number[i]) {
      b++;
    }
  }
  this->bulls = b;
  for (unsigned j = 0; j < guess.size(); j++) {
    if (secret_number[j] == guess[j]) {
      c++;
    }
  }
  this->cows = c;
}

unsigned int Guesses::get_bulls() {
  return this->bulls;
}

unsigned int Guesses::get_cows() {
  return this->cows;
}

Guesses::~Guesses() {

}

