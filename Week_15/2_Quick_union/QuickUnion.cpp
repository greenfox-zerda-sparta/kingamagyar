#include "QuickUnion.hpp"

QuickUnion::QuickUnion(int length){
  for (int i = 0; i < length; ++i) {
    array[i] = i;
  }
}

int QuickUnion::root(int x) {
  while (array[x] != x){
    x = array[x];
  }
  return x;
}

void QuickUnion::unite(int x, int y) {
  int root_x = root(x);
  int root_y = root(y);
  array[root_y] = root_x;
}

bool QuickUnion::find(int x, int y) {
  int root_x = root(x);
  int root_y = root(y);
  return root_x == root_y;
}
