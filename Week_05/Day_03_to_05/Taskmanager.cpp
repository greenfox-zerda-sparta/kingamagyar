/*
 * Taskmanager.cpp
 *
 *  Created on: Nov 17, 2016
 *      Author: Kinga
 */

#include "Taskmanager.hpp"

Taskmanager::Taskmanager() {
  this->tasks = 0;
  this->task_counter = 0;
  this->line = "";
  this->file_name = "todo.txt";

  count_tasks();
  tasks = new Task*[task_counter];
  set_array();
}

void Taskmanager::count_tasks() {
  std::ifstream myfile;
  task_counter = 0;
  myfile.open(file_name);
  while (getline(myfile, line)) {
    task_counter++;
  }
  myfile.close();
}

void Taskmanager::set_array() {
  std::ifstream myfile(file_name);
  if (myfile.is_open()) {
    for (int i = 0; i < task_counter; ++i) {
      getline(myfile, line);
      tasks[i] = new Task(line);
    }
  myfile.close();
  } else {
    missing_file();
  }
}

void Taskmanager::print_usage_info() {
  std::ifstream clfile;
  clfile.open("CL_Arguments.txt");
  while (getline(clfile, line)) {
    std::cout << line << std::endl;
  }
  clfile.close();
}

void Taskmanager::list_contents() {
  if (task_counter != 0) {
    for (int i = 0; i < task_counter; ++i) {
      std::cout << (i + 1) << " - [ " << " ] " << tasks[i]->get_task() << std::endl;
    }
  } else {
    std::cout << "You're free, enjoy life, no tasks!!!\n" << std::endl;
  }
}

void Taskmanager::add_new_task(char* new_content) {
  Task* new_task = new Task(new_content);
  Task** temp = new Task*[task_counter + 1];
  if (new_content != NULL) {
    for (int i = 0; i < task_counter; ++i) {
      temp[i] = tasks[i];
    }
  } else {
    std::cout << "Yo, no task was provided, so I cannot add it, dah!\n" << std::endl;
  }
  temp[task_counter] = new_task;
  delete[] tasks;
  tasks = temp;
  task_counter++;
  std::cout << "Yippi, we added a new task: " << new_content << std::endl;
}

void Taskmanager::remove_task(char* idx) {
  if (idx != NULL) {
    int line_input = atoi(idx);
    Task** temp = new Task* [task_counter];
    for (int i = 0; i < line_input-1; ++i) {
      temp [i] = tasks [i];
    }
    for (int i = line_input; i < task_counter; ++i) {
      temp[i-1] = tasks[i];
    }
    delete[] tasks;
    tasks = temp;
    task_counter--;
    save_task();
    std::cout << "\nYour list looks like this now: " << std::endl;
    for(int i = 0; i < task_counter; ++i) {
      std::cout << " - " << tasks[i]->get_task() << std::endl;
    }
    std::cout << std::endl;
  } else {
    std::cout << "Maaan, no task index was provided, so I cannot remove it!\n" << std::endl;
  }
}

void Taskmanager::save_task() {
  std::ofstream myfile;
  myfile.open(file_name);
  for (int i = 0; i < task_counter; ++i) {
    myfile << tasks[i]->get_task() << "\n";
  }
  myfile.close();
}

void Taskmanager::missing_file() {
  std::ofstream new_file("todo.txt");
  std::cout << "I couldn't find your task list, so I created a new \"todo.txt\"\n" << std::endl;
}

Taskmanager::~Taskmanager() {
  save_task();
  delete[] tasks;
}

