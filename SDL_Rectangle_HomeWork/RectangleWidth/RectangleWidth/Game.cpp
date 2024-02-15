//Game.cpp
#include "Game.h"
#include <iostream>

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);


			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}

void Game::render() {

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // sets the window bg color 
	SDL_RenderClear(renderer); // clears the renderer
	

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh); // assigns the window's width and height to ww and wh

	SDL_Rect outlineRect = { (ww -300) / 2, (wh-150) / 2, 300, 150 }; // define a rectangle in the middle of the window with size 200x100

	SDL_SetRenderDrawColor(renderer, 233, 233, 233, 255); // sets the color of the frame

	SDL_RenderDrawRect(renderer, &outlineRect); //draws the frame of the rectangle

	outlineRect = { (ww - 300) / 2 - 1, (wh - 150) / 2 - 1, 302, 152 }; // changes the size of the recrangle on each side with 1 pixel

	SDL_RenderDrawRect(renderer, &outlineRect); // draws the bigged frame 

	outlineRect = { (ww - 300) / 2-2, (wh - 150) / 2-2, 304, 154 }; // increase the size of rectangle again but with 2 pixels on each side

	SDL_RenderDrawRect(renderer, &outlineRect); // draws the bigger frame

	outlineRect = { (ww - 300) / 2-3, (wh - 150) / 2-3, 306, 156 }; // again increase the sizes with 3 pixels 

	SDL_RenderDrawRect(renderer, &outlineRect); // draws the bigger frame

	// the textures rendered  overlap the previosly rendered textures

	SDL_RenderPresent(renderer); // dispalys everything on the window 
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		
		default: break;
		}
	}
}

void Game::update() {


}



void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning() {
	return Game::running;
}

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	
}

Game::~Game() {

}