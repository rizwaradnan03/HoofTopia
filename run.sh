#!/bin/bash

# g++ -Iinclude -I./src -Llib ./src/main.cpp ./src/player.cpp -lmingw32 -lSDL2main -lSDL2 -mwindows -o main.exe
g++ -Iinclude -I./src -Llib ./src/main.cpp ./src/player.cpp ./src/projectile.cpp ./src/core/frame.cpp ./src/core/nodes/character_body.cpp ./src/core/nodes/static_body.cpp ./src/objects/block.cpp -lmingw32 -lSDL2main -lSDL2 -o main.exe
cp ./bin/SDL2.dll ./
./main.exe