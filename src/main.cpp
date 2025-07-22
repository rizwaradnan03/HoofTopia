#include <iostream>
#include "vector"

#include "main/main.hpp"
#include "main/player.hpp"
#include "main/objects/block.hpp"

using namespace std;

Game::Game(){
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow(TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1350, 810, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, 0);
}

//start y = 780 end y = 30
//max x = 1320
vector<Block> RenderWorldBlock(){
    int x = 0, y = 780;
    vector<Block> result;

    while(y > 150){
        while(x <= 1320){
            Block block(x, y, 30, 30);

            result.push_back(block);
            x = x + 30;
        }

        x = 0;
        y = y - 30;
    }

    return result;
}

Game::Run(){
    vector<Block> existing_block = RenderWorldBlock();

    SDL_Event event;

    // Player player(0, 780, 30, 30);
    Player player(700, 500, 30, 30);

    while(running == true){
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                running = false;
            }            
            
            player.Move(event);
        }
        
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderClear(renderer);

        for(int i = 0;i < existing_block.size();i++){
            existing_block[i].Run(renderer);
        }

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