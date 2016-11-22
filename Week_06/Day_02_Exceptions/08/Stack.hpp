/*
 * Stack.h
 *
 *  Created on: Nov 22, 2016
 *      Author: Kinga
 */

#ifndef STACK_HPP_
#define STACK_HPP_
#include <string>

class Stack {
private:
  int* arr;
  unsigned int new_size;
public:
  Stack();
  ~Stack();
  void push(int num) throw (int);
  int pop() throw (int);
  std::string interpretException(int exception);
};

#endif /* STACK_HPP_ */
