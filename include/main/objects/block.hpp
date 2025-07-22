#ifndef block_hpp
#define block_hpp

#include "SDL2/SDL.h"
#include "core/nodes/static_body.hpp"

class Block: public StaticBody {
    private:
        int health;

    public:
        Block(int x, int y, int w, int h);
        void Hit(int hit_val);

        void Run(SDL_Renderer *ren) override;
        void Render(SDL_Renderer *ren) override;
};

#endif