#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

int sum_of_gold(Pirate pirates[], int length);

int avg_gold_per_pirate(Pirate pirates[], int length);

string find_richest_with_wooden_leg(Pirate* pirates, int length);

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };

  cout << sum_of_gold(pirates, 6) << endl;
  cout << avg_gold_per_pirate(pirates, 6) << endl;
  cout << find_richest_with_wooden_leg(pirates, 6) << endl;
  return 0;
}

int sum_of_gold(Pirate pirates[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
	  sum += pirates[i].gold_count;
  }
  return sum;
}

int avg_gold_per_pirate(Pirate pirates[], int length) {
  return sum_of_gold(pirates, length) /length;
}

string find_richest_with_wooden_leg(Pirate* pirates, int length) {
  int biggest_gold = 0;
  string richest = "";
  for (int i = 0; i < length; i++) {
    if (pirates[i].gold_count > biggest_gold && pirates[i].has_wooden_leg) {
      biggest_gold = pirates[i].gold_count;
      richest = pirates[i].name;
    }
  }
  return richest;
}
