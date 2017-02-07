
#ifndef QuickUnion_hpp
#define QuickUnion_hpp

#include <stdio.h>

class QuickUnion {
private:
  int array[];
  int root(int x);
public:
  QuickUnion(int length);
  void unite(int x, int y);
  bool find(int x, int y);
};

#endif /* QuickUnion_hpp */
