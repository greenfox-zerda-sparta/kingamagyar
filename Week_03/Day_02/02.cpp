#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

void get_surface(RectangularCuboid* r);

void get_volume(RectangularCuboid* s);

int main() {
  RectangularCuboid small = {8, 5, 7};
  get_surface(&small);
  get_volume(&small);
  return 0;
}

void get_surface(RectangularCuboid* r) {
  cout << 2 * (r->a + r->b + r->c) << endl;
}
void get_volume(RectangularCuboid* s) {
	cout << s->a * s->b * s->c << endl;
}
