#include "Guesses.hpp"
#include "SecretNumber.hpp"
using namespace std;


int main() {
  Guesses guess;
  SecretNumber number;

  try {
    int input;
    cout << "Guess the 4 digit number: ";
    while (cin >> input) {
      if (input < 1000 || input > 10000) {
        cout << "It needs to be a 4 digit number (999 < number < 10 000)!" << endl;
      } else {
        vector<int> your_guess = guess.number_to_vector(input);
        guess.check_guesses(your_guess, number.generate_secret_number());
        if (guess.get_bulls() == 4) {
          cout << "Congrats! You have guessed all the 4 digits!" << endl;
        } else if (guess.get_bulls() < 4) {
          cout << "Bulls = " << guess.get_bulls() << ", Cows = " << guess.get_cows() << endl;
        }
      }
    }
    return 0;
  } catch (exception& excp) {
    cerr << "Exception: " << excp.what() << endl;
    return 1;
  } catch (...) {
    cerr << "Unknown error!" << endl;
    return 2;
  }

  number.print_secret_number();

	return 0;
}
