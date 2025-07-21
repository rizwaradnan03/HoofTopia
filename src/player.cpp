#include "main/player.hpp"
#include "main/projectile.hpp"
#include "core/image.hpp"

#include <iostream>
using namespace std;

Player::Player(int x, int y, int w, int h)
{
    rect = {x, y, w, h};
    velocity = 1;
}

void Player::ChangeVelocity(int vel)
{
    velocity = vel;
}

void Player::Move(SDL_Event event)
{
    int type = event.key.keysym.sym;

    if (type == 100){
        rect.x += velocity;
        last_direction = "right";
    }else if(type == 97){
        rect.x -= velocity;
        last_direction = "left";
    }else if(type == 119){
        rect.y -= velocity;
        last_direction = "top";
    }else if(type == 115){
        rect.y += velocity;
        last_direction = "bottom";
    }
}

void Player::Render(SDL_Renderer *ren){
    texture = LoadTexture(ren, "../assets/sprites/hat-cowboy.png");
    SDL_RenderCopy(ren, texture, nullptr, &rect);
    // SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
    // SDL_RenderFillRect(ren, &rect);
}

void Player::Action(SDL_Event event, SDL_Renderer *ren){
    int type = event.key.keysym.sym;

    if(type == 32){
        if(last_direction == "right"){
            Projectile projectile(ren, last_direction, rect.x, rect.y, 5, 5);
        }
    }
}