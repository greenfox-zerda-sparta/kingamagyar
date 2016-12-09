#ifndef RANDOMNUMBER_HPP_
#define RANDOMNUMBER_HPP_
#include <iostream>
#include <vector>
#include<cstdlib>

class RandomNumber {
public:
  RandomNumber();
  std::vector<int> get_new_random_number();
  void print_random_number(std::vector<int> rand);
};

#endif /* RANDOMNUMBER_HPP_ */
