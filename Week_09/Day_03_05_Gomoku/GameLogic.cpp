#include "GameLogic.hpp"

GameLogic::GameLogic(std::vector<std::vector<int>>& new_board) {

}

int GameLogic::check_row_for_winner(std::vector<std::vector<int>>& new_board) {
  for (int i = 0; i < new_board.size(); i++) {
    for (int j = 0; j < new_board[i].size(); j++) {
      if (new_board[i][j] == 'x' && new_board[i][j+1] == 'x' && new_board[i][j+2] == 'x' && new_board[i][j+3] == 'x' && new_board[i][j+4] == 'x') {
        return 1;
      } else if (new_board[i][j] == 'o' && new_board[i][j+1] == 'o' && new_board[i][j+2] == 'o' && new_board[i][j+3] == 'o' && new_board[i][j+4] == 'o') {
        return 2;
      }
    }
  }
  return 0;
}
 
int GameLogic::check_column_for_winner(std::vector<std::vector<int>>& new_board) {
  for (int i = 0; i < new_board.size(); i++) {
    for (int j = 0; j < new_board[i].size(); j++) {
      if (new_board[i][j] == 'x' && new_board[i+1][j] == 'x' && new_board[i+2][j] == 'x' && new_board[i+3][j] == 'x' && new_board[i+4][j] == 'x') {
        return 1;
      } else if (new_board[i][j] == 'o' && new_board[i+1][j] == 'o' && new_board[i+2][j] == 'o' && new_board[i+3][j] == 'o' && new_board[i+4][j] == 'o') {
        return 2;
      }
    }
  }
  return 0;
}

int GameLogic::check_diagonal_down_for_winner(std::vector<std::vector<int>>& new_board) {
  for (int i = 0; i < new_board.size(); i++) {
    for (int j = 0; j < new_board[i].size(); j++) {
      if (new_board[i][j] == 'x' && new_board[i+1][j+1] == 'x' && new_board[i+2][j+2] == 'x' && new_board[i+3][j+3] == 'x' && new_board[i+4][j+4] == 'x') {
        return 1;
      } else if (new_board[i][j] == 'o' && new_board[i+1][j+1] == 'o' && new_board[i+2][j+2] == 'o' && new_board[i+3][j+3] == 'o' && new_board[i+4][j+4] == 'o') {
        return 2;
      }
    }
  }
  return 0;
}

int GameLogic::check_diagonal_up_for_winner(std::vector<std::vector<int>>& new_board) {
  for (int i = 0; i < new_board.size(); i++) {
    for (int j = 0; j < new_board[i].size(); j++) {
      if (new_board[i][j] == 'x' && new_board[i+1][j-1] == 'x' && new_board[i+2][j-2] == 'x' && new_board[i+3][j-3] == 'x' && new_board[i+4][j-4] == 'x') {
        return 1;
      } else if (new_board[i][j] == 'o' && new_board[i+1][j-1] == 'o' && new_board[i+2][j-2] == 'o' && new_board[i+3][j-3] == 'o' && new_board[i+4][j-4] == 'o') {
        return 2;
      }
    }
  }
  return 0;
}

 
/*void GameLogic::cross_winner_in_row(int i, int j) {
  draw_line(i * FIELD_WIDTH - 3, j * FIELD_HEIGHT + FIELD_HEIGHT / 2 - 3, 5 * FIELD_WIDTH, 6);
}


void GameLogic::evaluate_winner(std::vector<std::vector<int>>& new_board) {
  if (check_row_for_winner(new_board) == 1 || check_column_for_winner(new_board) == 1 || check_diagonal_down_for_winner(new_board) == 1 || check_diagonal_up_for_winner(new_board) == 1){
    cross_winner_in_row(GameContext& context, int i, int j);
 }
}
*/
