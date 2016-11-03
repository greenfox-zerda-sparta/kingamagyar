#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  CarType type;
  double km;
  double gas;
};

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

void stats(Car* car);

int main() {
  Car car0 = {VOLVO, 290, 5};
  Car car3 = {TESLA, 320};
  stats(&car0);
  stats(&car3);
  return 0;
}

void stats(Car* car) {
  string CarType_name[4] = {"VOLVO", "TOYOTA", "LAND_ROVER", "TESLA"};
  cout << CarType_name[car->type] << endl << car->km << endl << car->gas << endl;
}

