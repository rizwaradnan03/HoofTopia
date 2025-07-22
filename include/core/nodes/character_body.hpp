#ifndef character_body_hpp

#include "SDL2/SDL.h"
#include "core/frame.hpp"

class CharacterBody: public Frame {
    public:
        SDL_Rect rect;
        virtual void Run(SDL_Renderer *ren) override;
        virtual void Render(SDL_Renderer *ren) override;
        virtual void Move(SDL_Event event);
};

#endif