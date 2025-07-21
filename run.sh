#!/bin/bash

# g++ -Iinclude -I./src -Llib ./src/main.cpp ./src/player.cpp -lmingw32 -lSDL2main -lSDL2 -mwindows -o main.exe
g++ -Iinclude -I./src -Llib ./src/main.cpp ./src/player.cpp ./src/projectile.cpp -lmingw32 -lSDL2main -lSDL2 -o main.exe
cp ./bin/SDL2.dll ./
./main.exe