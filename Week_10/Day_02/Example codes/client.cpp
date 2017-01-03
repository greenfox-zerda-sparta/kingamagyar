#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2_net/SDL_net.h"

int main() {
  //Initialize the SDL_net
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  
  //Set-up the IP address of the client
  IPaddress ip;
  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
  
  //Open client socket
  TCPsocket client = SDLNet_TCP_Open(&ip);
  
  //Allocate space for the text
  char text[100];
  
  //Receive the message
  SDLNet_TCP_Recv(client, text, 100);
  
  //Print out the message
  std::cout << text << std::endl;
  
  //Close the connection
  SDLNet_TCP_Close(client);
  SDL_Quit();
}
