/*
 * Student.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: Kinga
 */

#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() {
this->grade = 0;
this->grade_array = new int[0];
this->size = 0;
}

void Student::add_grade(unsigned int grade) {
  if (grade >= 1 && grade <= 5) {
    int* arr = new int[size + 1];
    for (int i = 0; i < size; i++) {
      arr[i] = grade_array[i];
    }
    arr[size] = grade;
    delete[] grade_array;
    grade_array = arr;
    size++;
  } else {
    cout << "Error! The grades can go from 1 to 5!";
  }
}

double Student::get_average() {
  unsigned int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += grade_array [i];
  }
  return sum/size;
}
