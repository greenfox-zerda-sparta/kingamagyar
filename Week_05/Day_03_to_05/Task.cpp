/*
 * Task.cpp
 *
 *  Created on: Nov 17, 2016
 *      Author: Kinga
 */

#include "Task.hpp"

Task::Task(std::string task) {
this->task = task;
}

std::string Task::get_task() {
  return task;
}

Task::~Task() {

}

