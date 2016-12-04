#include "SecretNumber.hpp"

SecretNumber::SecretNumber() {
  this->secret_number;
}

std::vector<int> SecretNumber::generate_secret_number() {
  srand(time(NULL));
  std::vector<int> secret_number(4);
  secret_number[0] = rand() % 9 + 1;
  secret_number[1] = rand() % 10;
  secret_number[2] = rand() % 10;
  secret_number[3] = rand() % 10;
  //set_secret_number(secret_number);
  return secret_number;
}

void SecretNumber::set_secret_number(std::vector<int> num) {
  for (unsigned i = 0; i < num.size(); i++) {
    this->secret_number[i] = num [i];
  }
}

std::vector<int> SecretNumber::get_secret_number() {
  return this->secret_number;
}


void SecretNumber::print_secret_number() {
  for (unsigned i = 0; i < 4; i++) {
    std::cout << this->secret_number[i];
  }
}

SecretNumber::~SecretNumber() {
}

