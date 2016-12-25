#ifndef GameContext_hpp
#define GameContext_hpp

#include "SDL2/SDL.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

const int SCREEN_WIDTH = 703;
const int SCREEN_HEIGHT = 703;
const int FIELD_WIDTH = 37;
const int FIELD_HEIGHT = 37;

class GameContext {
private:
  SDL_Window* window;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
  
public:
  GameContext(std::vector<std::vector<int>>&);
  void run(std::vector<std::vector<int>>&);
  void load_texture(std::string, std::string);
  void draw_texture(std::string, int, int);
  void draw_line(int, int, int, int);
  void cross_winner_in_row(int, int);
  void check_row_for_winner(std::vector<std::vector<int>>&);
  void render();
  ~GameContext();
};

#endif /* GameContext_hpp */
