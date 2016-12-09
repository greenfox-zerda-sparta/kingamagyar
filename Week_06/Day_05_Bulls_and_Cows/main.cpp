#include "RandomNumber.hpp"
#include "TurnToVector.hpp"
#include "Guess.hpp"

using namespace std;

int main() {
  RandomNumber rand;
  TurnToVector turn;
  Guess guess;
  
  try {
    int input = 0;
    cout << "You have to enter a 4 digit number to guess which number I thought of!\n";
    srand(time(NULL));
    vector<int> random_number = rand.get_new_random_number();
    cout << "\n//The random number: ";
    rand.print_random_number(random_number);
    cout << "Enter your guess (Hit 'q' if you want to give up): ";
    int number_of_guesses = 1;
    
    while (cin >> input && number_of_guesses < 10) {
      if (input > 9999 || input < 1000)
        cout << "The number must be between 999 and 10000!\n";
      else {
        vector<int> v_guess = turn.int_to_vector(input);
        guess.check_guess(v_guess, random_number);
        guess.player_wins();
        guess.print_result();
      }
      number_of_guesses++;
    }
    cout << "Game over!\n";
    return 0;
  }
  catch (exception& e) {
    cerr << "Error: " << e.what() << endl;
    return 1;
  }
  catch (...) {
    cerr << "Unknown exception!\n";
    return 2;
  }
}
