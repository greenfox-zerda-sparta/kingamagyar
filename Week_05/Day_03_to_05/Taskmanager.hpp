/*
 * Taskmanager.hpp
 *
 *  Created on: Nov 17, 2016
 *      Author: Kinga
 */

#ifndef TASKMANAGER_HPP_
#define TASKMANAGER_HPP_
#include "Task.hpp"

class Taskmanager {
  private:
    Task** tasks;
    unsigned int task_counter;
    std::string line;
    std::string file_name;
  public:
    Taskmanager();
    void set_task(std::string tasks);
    void count_tasks(std::string file_name);
    void print_usage_info();
    bool is_file_open();
    void list_contents();
    void add_new_task(char* command);
    void remove_task(char* command);
    void missing_file();
    virtual ~Taskmanager();
};

#endif /* TASKMANAGER_HPP_ */
