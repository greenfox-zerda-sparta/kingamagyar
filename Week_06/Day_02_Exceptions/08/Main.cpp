#include <iostream>
#include <string>
#include "Stack.hpp"
using namespace std;

// Create a fixed size stack. The stack can contain only 5 elements.
// You can push on the stack and pop from the stack.
// Write the push and pop methods so, that each throws an integer value if there is an error.
// Like when the stack is empty or full. Just make sure those are different values.
// Write a method called string interpretException(int exception) that returns the error message string for the integer.
//
// Illustrate in the main function both when it works fine and when exceptions occur.

int main() {
  Stack* stack1 = new Stack;

  try {
    stack1->push(1);
    stack1->push(2);
    stack1->push(3);
    stack1->push(4);
    stack1->push(5);
    stack1->push(6);
  }
  catch (int x) {
    cout << stack1->interpretException(x) << endl;
  }

  Stack* stack2 = new Stack;
  try {
    stack2->pop();
    stack2->pop();
    stack2->pop();
    stack2->pop();
    stack2->pop();
  }
  catch (int x) {
    cout << stack1->interpretException(x) << endl;
  }
  return 0;
}
