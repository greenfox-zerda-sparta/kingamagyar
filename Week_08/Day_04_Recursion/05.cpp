#include <iostream>
#include <string>

using namespace std;

unsigned int count_bunny_ears(unsigned int bunny) {
  if (bunny == 0) {
    return 0;
  } else {
    return 2 + count_bunny_ears(bunny-1);
  }
}

int main() {
  // We have a number of bunnies and each bunny has two big floppy ears.
  // We want to compute the total number of ears across all the bunnies
  // recursively (without loops or multiplication).
  unsigned int nb_of_bunnies = 24;
  cout << count_bunny_ears(nb_of_bunnies) << endl;
  return 0;
}
