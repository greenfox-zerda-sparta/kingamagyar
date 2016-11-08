/*
 * Student.h
 *
 *  Created on: Nov 8, 2016
 *      Author: Kinga
 */

#define STUDENT_H_
#include <string>

using namespace std;

class Student {
  private:
    unsigned int grade;
    int* grade_array;
    int size;
  public:
    Student();
    void add_grade(unsigned int grade);
    double get_average();
};
