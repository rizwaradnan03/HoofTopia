#ifndef frame_hpp
#define frame_hpp

#include "SDL2/SDL.h"
    class Frame {
        public:
            virtual void Run(SDL_Renderer *ren);
            virtual void Render(SDL_Renderer *ren);
    };
#endif