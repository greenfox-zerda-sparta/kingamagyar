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
    void count_tasks();
    void set_array();
    void print_usage_info();
    void list_contents();
    void add_new_task(char* new_content);
    void remove_task(char* idx);
    void save_task();
    void missing_file();
    virtual ~Taskmanager();
};

#endif /* TASKMANAGER_HPP_ */
