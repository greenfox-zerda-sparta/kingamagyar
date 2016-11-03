#include <string>
#include <iostream>

using namespace std;

// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
//
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a reference to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)
//
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
//
// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.

struct House {
  string address;
  int price;
  int nb_rooms;
  int area;
};

bool is_worth_to_buy(House& h);

int count(House* houses, int length);

int main() {
  House houses[] = {
    {"10 Bond Street", 18000, 2, 50},
	{"14 Park Square", 80000, 4, 75},
	{"22 Saigon Street", 15000, 1, 40},
	{"66 Brooklyn Avenue", 30000, 3, 80}
  };

  House h3 = {"22 Saigon Street", 15000, 1, 40};
  cout << is_worth_to_buy(h3) << endl;
  cout << count(houses, 4) << endl;
  return 0;
}

bool is_worth_to_buy(House& h) {
  int market_price = 400;
  return ((market_price * h.area) > h.price);
}

int count(House houses[], int length) {
  int market_price = 400;
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += (houses[i].price < market_price * houses[i].area ? 1 : 0);
  }
  return sum;
}
