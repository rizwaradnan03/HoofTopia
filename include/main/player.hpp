#include "SDL2/SDL.h"
#include <string>
using namespace std;

#ifndef player_hpp
class Player {
    private:
        int velocity = 2;
        string last_direction;
        SDL_Rect rect;
        
    public:
        Player(int x, int y, int w, int h);
        void ChangeVelocity(int vel);
        void Move(SDL_Event event);
        void Render(SDL_Renderer *ren);
        void Action(SDL_Event event);
};

#endif