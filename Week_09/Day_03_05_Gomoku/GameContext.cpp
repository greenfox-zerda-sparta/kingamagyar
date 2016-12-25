#include "GameContext.hpp"

GameContext::GameContext(std::vector<std::vector<int>>& new_board) {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku: Game on!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT,SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  load_texture("empty", "tile.bmp");
  load_texture("x", "piggy_circle.bmp");
  load_texture("o", "monkey.bmp");
  //load_texture("x", "k.bmp");
  //load_texture("o", "e.bmp");
  run(new_board);
}

void GameContext::run(std::vector<std::vector<int>>& new_board) {
  bool is_running = true;
  int turn = 0;
  SDL_Event event;
  while(is_running) {
    for (int i = 0; i < new_board.size(); i++) {
      for (int j = 0; j < new_board[i].size(); j++) {
        if (new_board[i][j] == 0) {
          draw_texture("empty", i, j);
        } else if (new_board[i][j] == 1) {
          draw_texture("x", i, j);
        } else if (new_board[i][j] == 2) {
          draw_texture("o", i, j);
        }
      }
    }
    if(SDL_PollEvent(&event)) {
      switch(event.type) {
        case SDL_QUIT:
          is_running = false;
          break;
        case SDL_MOUSEBUTTONDOWN:
          int x = 0;
          int y = 0;
          SDL_GetMouseState(&x, &y);
          if(turn % 2 == 0 && new_board[x/FIELD_WIDTH][y/FIELD_HEIGHT] == 0) {
            new_board[x/FIELD_WIDTH][y/FIELD_HEIGHT] = 1;
            turn++;
          } else if(turn % 2 == 1 && new_board[x/FIELD_WIDTH][y/FIELD_HEIGHT] == 0) {
            new_board[x/FIELD_WIDTH][y/FIELD_HEIGHT] = 2;
            turn++;
          }
          break;
      }
    }
    render();
  }
}

void GameContext::load_texture(std::string sprite_name, std::string file_path) {
  SDL_Surface* surface = SDL_LoadBMP(file_path.c_str());
  sprites[sprite_name] = SDL_CreateTextureFromSurface(renderer, surface);
  SDL_FreeSurface(surface);
}

void GameContext::draw_texture(std::string sprite_name, int x, int y) {
  SDL_Rect rect;
  rect.x = x * FIELD_WIDTH;
  rect.y = y * FIELD_HEIGHT;
  rect.w = FIELD_WIDTH;
  rect.h = FIELD_HEIGHT;
  SDL_RenderCopy(renderer, sprites[sprite_name], NULL, &rect);
}

void GameContext::draw_line(int x1, int y1, int x2, int y2) {
  SDL_Rect rect;
  rect.x = x1;
  rect.y = y1;
  rect.w = x2;
  rect.h = y2;
  SDL_RenderDrawRect(renderer, &rect);
  SDL_SetRenderDrawColor(renderer, 255, 0, 127, 255);
  SDL_RenderFillRect(renderer, &rect);
  SDL_RenderPresent(renderer);
}

void GameContext::render() {
  SDL_RenderPresent(renderer);
}

GameContext::~GameContext() {
  for (std::map<std::string, SDL_Texture*>::iterator it = sprites.begin(); it != sprites.end(); ++it) {
    SDL_DestroyTexture(it->second);
  }
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  renderer = NULL;
  window = NULL;
  SDL_Quit();
}
