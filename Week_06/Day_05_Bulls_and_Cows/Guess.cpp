#include "Guess.hpp"

Guess::Guess() {
  bulls = 0;
  cows = 0;
}

void Guess::set_bulls(int num) {
  bulls = num;
}
int Guess::get_bulls() {
  return bulls;
}

void Guess::set_cows(int num) {
  cows = num;
}

int Guess::get_cows() {
  return cows;
}

void Guess::check_guess(std::vector<int> guess, std::vector<int> random_number) {
  unsigned int b = 0;
  unsigned int c = 0;
  std::vector<char> is_bull(4,'n');
  std::vector<char> is_cow(4,'n');
  for (int i = 0; i < random_number.size(); ++i) {
    if (guess[i] == random_number[i]) {
      ++b;
      is_bull[i] = 'y';
    }
  }
  for (int i = 0; i < random_number.size(); ++i) {
    if (is_bull[i] == 'n') {
      for (int j = 0; j < random_number.size(); ++j) {
        if (is_bull[j]=='n' && is_cow[j]=='n') {
          if (guess[j] == random_number[i]) {
            ++c;
            is_cow[j] = 'y';
          }
        }
      }
    }
  }
  set_cows(c);
  set_bulls(b);
}

void Guess::player_wins() {
  if (bulls == 4) {
    std::cout << "Congrats! You have guessed the number and won!";
  }
}

void Guess::print_result() {
  if (bulls < 4) {
    std::cout << "Bulls: " << bulls << ", " << "Cows: " << cows << std::endl;
    std::cout << "Enter your guess (Hit 'q' if you want to give up): ";
  }
}
