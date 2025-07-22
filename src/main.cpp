#include "main/main.hpp"
#include "main/player.hpp"
#include <iostream>
using namespace std;

Game::Game(){
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow(TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 900, 700, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, 0);
}

Game::Run(){
    SDL_Event event;

    Player player(0, 0, 20, 20);

    while(running == true){
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                running = false;
            }            
            
            player.Move(event);
        }
        
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderClear(renderer);

        //RUN EVERY OBJECT CLASS
        player.Run(renderer);

        SDL_RenderPresent(renderer);
        
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

int main(int argc, char* argv[]) {
    Game game;
    game.Run();

    return 0;
}