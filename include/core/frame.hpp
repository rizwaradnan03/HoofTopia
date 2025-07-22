#include "SDL2/SDL.h"

#ifndef frame_hpp
    class Frame {
        public:
            virtual void Run(SDL_Renderer *ren);
            virtual void Render(SDL_Renderer *ren);
    };
#endif