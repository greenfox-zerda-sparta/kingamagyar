#include <iostream>
#include <string>

using namespace std;

template <class T>

void sort_array(T arr[], T length) {
  int flag = 1;
  int i, j;
  for (i = 1; (i <= length && flag); i++) {
    flag = 0;
    for (j = 0; j < (length - 1); j++) {
      if (arr[j+1] > arr[j]) {
        T temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        flag = 1;
      }
    }
  }
}

int main() {
	// create a function template that takes an array and sort it in a descending order
  int my_array[5] = {72, 85, 24, 55, 12};
  sort_array(my_array, 5);
  for (int i = 0; i < 5; i++) {
    cout << my_array[i] << endl;
  }
  return 0;
}
