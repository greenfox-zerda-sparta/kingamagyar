#include "TurnToVector.hpp"

TurnToVector::TurnToVector() {
}

std::vector<int> TurnToVector::int_to_vector(int num) {
  if (num > 9999 || num < 1000){
    std::cout << "Wrong number, outside of the allowed range!";
  }
  std::vector<int> v(4);
  v[0] = num/1000 % 10;
  v[1] = num/100 % 10;
  v[2] = num/10 % 10;
  v[3] = num % 10;
  return v;
}
