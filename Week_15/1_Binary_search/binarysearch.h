#ifndef binarysearch_h
#define binarysearch_h

#include <iostream>
#include <vector>

bool is_number_found(std::vector<int> numbers, int searched_number) {
  int lower_bound = 0;
  int upper_bound = numbers.size() - 1;
  
  while (lower_bound <= upper_bound){
    int middle_bound = (lower_bound + upper_bound) / 2;
    if (numbers[middle_bound] == searched_number) {
      return true;
    } else if (numbers[middle_bound] < searched_number) {
      lower_bound = middle_bound + 1;
    } else if (numbers[middle_bound] > searched_number) {
      upper_bound = middle_bound - 1;
    }
  }
  return false;
}

#endif /* binarysearch_h */
