#include <iostream>
#include <string>

using namespace std;

int count_down(int n) {
  if (n == 0) {
    return 0;
  } else {
    cout << n << " ";
    return count_down(n - 1);
  }
}

int main() {
  // write a recursive function
  // that takes one parameter: n
  // and counts down from n
  
  int x = 5;
  cout << count_down(x);
  
  return 0;
}

