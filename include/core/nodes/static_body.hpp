#ifndef static_body_hpp
#define static_body_hpp

#include "SDL2/SDL.h"
#include "core/frame.hpp"

class StaticBody: public Frame {
    public:
        SDL_Rect rect;

    public:
        virtual void Run(SDL_Renderer *ren) override;
        virtual void Render(SDL_Renderer *ren) override;
};

#endif