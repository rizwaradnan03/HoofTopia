#ifndef main_screen_hpp
#define main_screen_hpp

#include "SDL2/SDL.h"
#include "core/frame.hpp"
#include "main/objects/block.hpp"

#include "vector"

class MainScreen: Frame {
    private:
        vector<Block> blocks;
        
    public:
        vector<Block> GetBlock();
        void SetBlock(Block block);
};

#endif