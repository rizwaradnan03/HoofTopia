#ifndef main_hpp

#include "SDL2/SDL.h"

#define TITLE "Hoof Topia"

class Game {
    private: 
        SDL_Window *window;
        SDL_Renderer *renderer;
        bool running = true;

    public:
        void Run();
        Game();
};

#endif