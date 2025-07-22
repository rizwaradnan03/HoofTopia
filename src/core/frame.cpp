#include "core/frame.hpp"

void Frame::Render(SDL_Renderer *ren){}

void Frame::Run(SDL_Renderer *ren){
    Frame::Render(ren);
}