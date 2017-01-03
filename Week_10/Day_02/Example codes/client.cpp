#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2_net/SDL_net.h"

int main() {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
  TCPsocket client = SDLNet_TCP_Open(&ip);
  char text[100];
  SDLNet_TCP_Recv(client, text, 100);
  std::cout << text << std::endl;
  SDLNet_TCP_Close(client);
  SDL_Quit();
}
