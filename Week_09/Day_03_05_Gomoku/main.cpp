#include "GameContext.hpp"


int main(int argc, const char * argv[]) {
  std::vector<std::vector<int> > board = std::vector<std::vector<int> > (19, std::vector<int>(19,0));
  GameContext game(board);
  return 0;
}
