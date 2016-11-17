/*
 * Task.hpp
 *
 *  Created on: Nov 17, 2016
 *      Author: Kinga
 */

#ifndef TASK_HPP_
#define TASK_HPP_
#include <iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <typeinfo>
#include <string>

class Task {
  private:
    std::string file_name;
    std::string task;
  public:
    Task(std::string task);
    std::string get_task();
    std::string get_file_name();
    virtual ~Task();
};

#endif /* TASK_HPP_ */
