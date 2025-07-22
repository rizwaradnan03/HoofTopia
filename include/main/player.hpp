#ifndef player_hpp
#include "SDL2/SDL.h"
#include "core/nodes/character_body.hpp"
#include <string>
using namespace std;

class Player: public CharacterBody {
    private:
        int velocity = 2;
        SDL_Texture *texture;
        string last_direction;
        
    public:
        Player(int x, int y, int w, int h);
        void ChangeVelocity(int vel);
        void Move(SDL_Event event) override;
        void Action( SDL_Renderer *ren, SDL_Event event);

        void Run(SDL_Renderer *ren) override;
        void Render(SDL_Renderer *ren) override;

        void SetX(int newVal) override;
        void SetY(int newVal) override;
        void SetW(int newVal) override;
        void SetH(int newVal) override;
};

#endif