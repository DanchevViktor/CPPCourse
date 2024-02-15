#include "Game.h"
#include <iostream>
using namespace std;

Game* game = NULL;
const int WINDOW_WIDTH = 512;
const int WINDOW_HEIGTH = 512;

int main(int argc, char* argv[]) {

	game = new Game();
	game->init("New Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH, WINDOW_HEIGTH, SDL_WINDOW_RESIZABLE);


	while (game->isRunning()) { // game loop
		game->handleEvents(); // 
		game->update(); // smqta kakvo i kak da se promenq
		game->render(); // risuva po ekrana 

	}



	return 0;
}