#ifndef GameLogic_hpp
#define GameLogic_hpp

#include <vector>

class GameLogic {
public:
  GameLogic(std::vector<std::vector<int>>&);
  int check_row_for_winner(std::vector<std::vector<int>>&);
  int check_column_for_winner(std::vector<std::vector<int>>&);
  int check_diagonal_down_for_winner(std::vector<std::vector<int>>&);
  int check_diagonal_up_for_winner(std::vector<std::vector<int>>&);
  void evaluate_winner(std::vector<std::vector<int>>&);
};

#endif /* GameLogic_hpp */
