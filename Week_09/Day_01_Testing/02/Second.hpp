#ifndef Second_hpp
#define Second_hpp

#include <iostream>
#include <vector>

class Second {
private:
  std::vector<int> numbers;
public:
  Second();
  int sumNumbers(std::vector<int>& vec);
};

#endif /* Second_hpp */
