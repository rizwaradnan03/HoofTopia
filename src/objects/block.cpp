#include "main/objects/block.hpp"

Block::Block(int x, int y, int w, int h){
    rect = {x, y, w, h};
}

void Block::Render(SDL_Renderer *ren){
    SDL_SetRenderDrawColor(ren, 69, 231, 60, 0.8);
    SDL_RenderFillRect(ren, &rect);
}

void Block::Run(SDL_Renderer *ren){
    Render(ren);
}