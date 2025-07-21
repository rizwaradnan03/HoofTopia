#ifndef projectile_hpp
#include "SDL2/SDL.h"
#include "string"

using namespace std;

class Projectile
{
private:
    int velocity;
    SDL_Rect rect;
    string direction;

public:
    Projectile(SDL_Renderer *ren, string dir, int x, int y, int w, int h);
    void Launch(SDL_Renderer *ren);
};
#endif