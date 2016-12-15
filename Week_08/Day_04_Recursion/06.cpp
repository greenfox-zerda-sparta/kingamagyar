#include <iostream>
#include <string>

using namespace std;

unsigned int nb_ear_of_weird_bunnies(unsigned int bunnies) {
  if (bunnies == 0) {
    return 0;
  } else {
    if (bunnies % 2 == 1) {
      return 2 + nb_ear_of_weird_bunnies(bunnies - 1);
    } else {
      return 3 + nb_ear_of_weird_bunnies(bunnies-1);
    }
  }
}

int main() {
  // We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
  // (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
  // have 3 ears, because they each have a raised foot. Recursively return the
  // number of "ears" in the bunny line 1, 2, ... n (without loops or
  // multiplication).
  unsigned int bunnies = 6;
  cout << nb_ear_of_weird_bunnies(bunnies);
  return 0;
}
