#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  long int cpu_speed_hz;
  long int ram_size;
};

void change (Computer* c);

int main() {
  Computer computer = {"Macbook", 3.2e9, 8e9};
  change(&computer);
  // Change the name of the computer to "Macbook Pro" and print all the stats

  return 0;
}

void change (Computer* c) {
  c->name = "Macbook Pro";
  cout << c->name << endl;
  cout << c->cpu_speed_hz << endl;
  cout << c->ram_size << endl;
}
