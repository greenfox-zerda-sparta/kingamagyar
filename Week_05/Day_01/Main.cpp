#include <iostream>
#include <string>
#include "Rock.h"
#include "Pop.h"
#include "Reggea.h"
#include "Jukebox.h"
using namespace std;


int main() {
  Song* rock1 = new Rock("Welcome to the Jungle", "Guns'n'Roses");
  cout << ((Rock*)rock1)->to_rate(1) << endl;
  cout << ((Rock*)rock1)->to_rate(5) << endl;
  cout << ((Rock*)rock1)->to_rate(6) << endl;
  cout << ((Rock*)rock1)->to_rate(2) << endl;
  cout << ((Rock*)rock1)->get_avg_rating() << endl;
  cout << ((Rock*)rock1)->get_artist() << endl << endl;

  Song* reggea1 = new Reggea("Redemption Song", "Bob Marley");
  cout << ((Reggea*)reggea1)->to_rate(1) <<endl;
  cout << ((Reggea*)reggea1)->to_rate(5) <<endl;
  cout << ((Reggea*)reggea1)->to_rate(3) <<endl;
  cout << ((Reggea*)reggea1)->get_avg_rating() <<endl;
  cout << ((Reggea*)reggea1)->get_title() <<endl << endl;

  Rock rock2("Light my fire", "Doors");
  Jukebox song1;
  song1.set_song(rock2);
  song1.rate("Light my fire", "Doors", 5);
  song1.rate("Light my fire", "Doors", 3);
  cout << song1.get_artist_rating("Doors") << endl;
  return 0;
}
