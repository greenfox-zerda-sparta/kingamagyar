#include "RandomNumber.hpp"

RandomNumber::RandomNumber() {
  //get_new_random_number();
}

std::vector<int> RandomNumber::get_new_random_number() {
  std::vector<int> random_number(4);
  random_number[0] = rand() % 9 + 1;
  do {
    random_number[1] = rand() % 10;
  } while (random_number[0] == random_number[1]);
  do {
    random_number[2] = rand() % 10;
  } while (random_number[2] == random_number[0] || random_number[2] == random_number[1]);
  do {
    random_number[3] = rand() % 10;
  } while (random_number[3] == random_number[0] || random_number[3] == random_number[1] || random_number[3] == random_number[2]);
  return random_number;
}

void RandomNumber::print_random_number(std::vector<int> rand) {
  for (unsigned int i = 0; i < rand.size(); ++i) {
    std::cout << rand[i];
  }
  std::cout << std::endl;
}
