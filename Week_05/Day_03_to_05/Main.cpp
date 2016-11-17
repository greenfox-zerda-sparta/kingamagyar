#include "Task.hpp"
#include "Taskmanager.hpp"
using namespace std;

int main(int argc, char* argv[]) {
  Taskmanager taskmanager;

  if (argc == 1) {
      taskmanager.print_usage_info();
    }

  if (taskmanager.is_file_open() == true) {
    if (argv[1][0] == '-' && argv[1][1] == 'l') {
      taskmanager.list_contents();
    } else if (argv[1][0] == '-' && argv[1][1] == 'a') {
      taskmanager.add_new_task(argv[2]);
    } else if (argv[1][0] == '-' && argv[1][1] == 'r') {
      taskmanager.remove_task(argv[2]);
    }
  } else {
    taskmanager.missing_file();
  }

	return 0;
}
