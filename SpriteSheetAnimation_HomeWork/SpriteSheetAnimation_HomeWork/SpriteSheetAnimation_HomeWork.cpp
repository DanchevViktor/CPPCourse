#include <iostream>
#include"Game.h"
using namespace std;

Game* game = NULL;
const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGTH = 720;

int main(int argc,char* agrv[])
{
    game = new Game();
    game->init("SpriteSheet HomeWork", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH, WINDOW_HEIGTH, SDL_WINDOW_RESIZABLE);

    while (game->isRunning()) {
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();



    return 0;
}

