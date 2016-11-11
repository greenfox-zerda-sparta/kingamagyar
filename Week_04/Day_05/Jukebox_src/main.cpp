#include <iostream>
#include <string>
#include "Song.h"
using namespace std;


int main() {
  Song hit;
  cout << hit.to_rate(4) << endl;
  cout << hit.to_rate(5) << endl;
  cout << hit.to_rate(3) << endl;
  cout << hit.to_rate(7) << endl;
  cout << hit.get_avg_rating() << endl;
	return 0;
}
