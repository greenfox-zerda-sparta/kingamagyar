#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2_net/SDL_net.h"

int main() {
  //Initialize the SDL_net
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  
  //Set-up the IP address of the server to connect with
  IPaddress ip;
  SDLNet_ResolveHost(&ip, NULL, 1234);
  
  //Create server socket and client socket
  TCPsocket server = SDLNet_TCP_Open(&ip);
  TCPsocket client;
  
  //Create a text that we want to send to the client
  const char* text = "Alma";
  
  //Create an infinite loop where we wait for the client to connect
  //if the client connects, we send the message and close the connection and break the infinite loop
  while (1) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      SDLNet_TCP_Send(client, text, 5);
      SDLNet_TCP_Close(client);
      break;
    }
  }
  SDL_Quit();
}
