/*
 * Taskmanager.cpp
 *
 *  Created on: Nov 17, 2016
 *      Author: Kinga
 */

#include "Taskmanager.hpp"

Taskmanager::Taskmanager() {
  tasks = 0;
  task_counter = 0;
  this->line = line;
  file_name = "todo.txt";
}

void Taskmanager::set_task(std::string task) {
  Task* new_task = new Task(task);
  Task** temp = new Task*[task_counter + 1];
  for (int i = 0; i < task_counter; ++i) {
    temp[i] = tasks[i];
  }
  temp[task_counter] = new_task;
  delete[] tasks;
  tasks = temp;
  task_counter++;
}

void Taskmanager::count_tasks(std::string file_name) {
    std::ifstream myfile;
    myfile.open(file_name);
    while (getline(myfile, line)) {
      task_counter++;
    }
    //std::cout << "\nYou have " << task_counter << " tasks on your list." << std::endl;
    myfile.close();
}

void Taskmanager::print_usage_info() {
  std::ifstream clfile;
  clfile.open("CL_Arguments.txt");
  while (getline(clfile, line)) {
    clfile >> line;
  }
  clfile.close();
}

bool Taskmanager::is_file_open() {
  std::ifstream myfile(file_name);
  return myfile.is_open();
}

void Taskmanager::list_contents() {
  std::ifstream myfile;
  myfile.open(file_name);
  if(myfile.peek() != std::ifstream::traits_type::eof()) {
    while(getline(myfile, line)) {
      task_counter++;
      std::cout << task_counter << " - [ " << " ] " << line << std::endl;
    }
    myfile.close();
  } else if (myfile.peek() == std::ifstream::traits_type::eof()) {
    std::cout << "You're free, enjoy life, no tasks!!!\n" << std::endl;
  }
}

void Taskmanager::add_new_task(char* command) {
  if (command != NULL) {
    std::ofstream myfile;
    myfile.open(file_name, std::ios::app);
    myfile << command << "\n";
    myfile.close();
  } else {
    std::cout << "Yo, no task was provided, so I cannot add it, dah!\n" << std::endl;
  }
}

void Taskmanager::remove_task(char* command) {
  if (command != NULL) {
    int line_input = atoi(command);
    int count = 0;
    std::ifstream myfile;
    myfile.open(file_name);
    std::ofstream temp;
    temp.open("temp.txt");
    while (getline(myfile, line)) {
      count++;
      if (line_input == count) {
        std::cout << "Yay, you've removed " << line << " from your todo!\n" << std::endl;
      } else {
        temp << line << std::endl;
      }
    }
    myfile.close();
    temp.close();
    remove("todo.txt");
    rename("temp.txt", "todo.txt");
  } else {
    std::cout << "Maaan, no task index was provided, so I cannot remove it!\n" << std::endl;
  }
}

void Taskmanager::missing_file() {
  std::ofstream new_file("todo.txt");
  std::cout << "I couldn't find your task list, so I created a new \"todo.txt\"\n" << std::endl;
}

Taskmanager::~Taskmanager() {

}

