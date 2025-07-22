#ifndef character_body_hpp
#define character_body_hpp

#include "SDL2/SDL.h"
#include "core/frame.hpp"

class CharacterBody: public Frame {
    public:
        int x, y, w, h;

    public:
        SDL_Rect rect;
        virtual void Run(SDL_Renderer *ren) override;
        virtual void Render(SDL_Renderer *ren) override;
        virtual void Move(SDL_Event event);

        virtual void SetX(int newVal);
        virtual void SetY(int newVal);
        virtual void SetW(int newVal);
        virtual void SetH(int newVal);
};

#endif