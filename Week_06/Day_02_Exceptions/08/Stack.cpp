/*
 * Stack.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: Kinga
 */

#include "Stack.hpp"

Stack::Stack() {
  this->arr = new int[5];
  this->new_size = 0;
}

void Stack::push(int num) throw (int) {
  if (new_size < 5) {
    arr[new_size] = num;
    new_size++;
  } else {
    throw 5;
  }
}

int Stack::pop() throw (int) {
  if (new_size > 0) {
    return arr[new_size];
    new_size--;
  } else {
    throw 0;
  }
}

std::string Stack::interpretException(int exception) {
  if (exception == 5) {
    return "Error: the stack if full, you cannot push!";
  } else if (exception == 0) {
    return "Error: the stack is empty, you cannot pop!";
  }
  return "Exception!";
}

Stack::~Stack() {
  delete[] arr;
}

