#include "main/objects/projectile.hpp"
#include <iostream>
using namespace std;

Projectile::Projectile(SDL_Renderer *ren, string dir, int x, int y, int w, int h){
    rect = {x, y, w, h};
    direction = dir;
    velocity = 1;
}

void Projectile::Launch(SDL_Renderer *ren){
    if(direction == "right"){
        rect.x += velocity;
    }else if(direction == "left"){
        rect.x += velocity;
    }else if(direction == "top"){
        rect.y -= velocity;
    }else if(direction == "bottom"){
        rect.y -= velocity;
    }

    SDL_SetRenderDrawColor(ren, 245, 40, 145, 0.8);
    SDL_RenderFillRect(ren, &rect);
}