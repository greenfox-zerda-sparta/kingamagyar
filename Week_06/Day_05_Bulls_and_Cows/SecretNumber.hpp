#ifndef SECRETNUMBER_HPP_
#define SECRETNUMBER_HPP_

#include <iostream>
#include <vector>
#include<cstdlib>

class SecretNumber {
private:
  std::vector<int> secret_number;
public:
  SecretNumber();
  std::vector<int> generate_secret_number();
  void set_secret_number(std::vector<int> num);
  std::vector<int> get_secret_number();
  void print_secret_number();
  virtual ~SecretNumber();
};

#endif /* SECRETNUMBER_HPP_ */
