#include <iostream>
using namespace std;

struct Stack {
  double* array;
  int size;
};

Stack* stack_construct(double input[], int size);

void stack_push(Stack& stack, double value);

double stack_pop(Stack& stack);

bool is_emptiness(Stack& stack);

int main() {
  double original_array[] = {3.5, 4.6, 5.8};
  Stack* original_stack = stack_construct(original_array, 3);
  cout << "Original size of the stack: " << original_stack->size << endl;

  stack_push(*original_stack, 6.7);
  cout << "Size of the stack after pushing a value: " << original_stack->size << endl;

  cout << "The value that was pushed last time is " << stack_pop(*original_stack) << endl;
  cout << "The size of the stack after popping: " << original_stack->size << endl;

  cout << "Is it true that the stack is empty? " << is_emptiness(*original_stack);
  delete[] original_stack->array;
  delete original_stack;
  return 0;
}

//Construct
Stack* stack_construct(double input[], int size) {
  Stack* new_stack = new Stack;
  new_stack->array = new double[size];
  for (int i = 0; i < size; i++) {
    new_stack->array[i] = input[i];
  }
  new_stack->size = size;
  return new_stack;
}

//Push
void stack_push(Stack& stack, double value) {
  double* new_array = new double[++stack.size];
  for (int i = 0; i < stack.size; i++) {
    new_array[i] = i < stack.size-1 ? stack.array[i] : value;
  }
  delete[] stack.array;
  stack.array = new_array;
}

//Pop
double stack_pop(Stack& stack) {
  if (stack.size == 0) {
    return 0;
  }
  double result = stack.array[stack.size-1];
  double* new_array = new double[--stack.size];
  for (int i = 0; i < stack.size; i++) {
    new_array[i] = stack.array[i];
  }
  delete[] stack.array;
  stack.array = new_array;
  return result;
}

//Is empty
bool is_emptiness(Stack& stack) {
  return stack.size == 0;
}





