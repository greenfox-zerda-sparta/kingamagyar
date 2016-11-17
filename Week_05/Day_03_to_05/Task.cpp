/*
 * Task.cpp
 *
 *  Created on: Nov 17, 2016
 *      Author: Kinga
 */

#include "Task.hpp"

Task::Task(std::string task) {
this->task = task;
this->file_name = file_name;
}

std::string Task::get_task() {
  return task;
}

std::string Task::get_file_name() {
  return file_name;
}

Task::~Task() {

}

