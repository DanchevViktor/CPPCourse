#include <iostream>
using namespace std;
#include "Game.h"

Game* game = NULL;
const int WINDOW_WIDTH = 720;
const int WINDOW_HEIGHT = 720;

const int FPS = 60;
const int frameDelay = 1000 / FPS;

Uint32 frameStart;
int frameTime;

int main(int argc,char*argv[])
{
    game = new Game();
    game->init("Moving Picture", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);

    while (game->isRunning()) {
        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();
        game->render(); 

        frameTime = SDL_GetTicks() - frameStart;
        if (frameDelay > frameTime) {
            SDL_Delay(frameDelay - frameTime);
        }

    }

    game->clean();

    return 0;
}

