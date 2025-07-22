#include "core/nodes/character_body.hpp"

void CharacterBody::Run(SDL_Renderer *ren) {
    Frame::Run(ren);
}

void CharacterBody::Render(SDL_Renderer *ren){}

void CharacterBody::Move(SDL_Event event){}

void CharacterBody::SetX(int newVal){
    x = newVal;
}

void CharacterBody::SetY(int newVal){
    y = newVal;
}

void CharacterBody::SetW(int newVal){
    w = newVal;
}

void CharacterBody::SetH(int newVal){
    h = newVal;
}