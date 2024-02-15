#include "Game.h"
#include <iostream>
int c = 0;
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

				 //loading textures 

				TextureManager::Instance()->loadTexture("assets/sport.png", "png", renderer);
				TextureManager::Instance()->loadTexture("assets/sport1.png", "png1", renderer);
				TextureManager::Instance()->loadTexture("assets/sport2.png", "png2", renderer);
				TextureManager::Instance()->loadTexture("assets/sport3.png", "png3", renderer);


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
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); 

	// calculating the middle of the window

	SDL_RenderClear(renderer);
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);
	int quadrantWidth = ww / 2;
	int quadrantHeight = wh / 2;

	// define the 4 quadrants 

	clickableRect = { 0, 0, quadrantWidth, quadrantHeight }; // 1st quadrant
	clickableRect1 = { quadrantWidth, 0, quadrantWidth, quadrantHeight }; // 2nd quadrant
	clickableRect2 = { 0, quadrantHeight, quadrantWidth, quadrantHeight }; // 3rd quadrant
	clickableRect3 = { quadrantWidth, quadrantHeight, quadrantWidth, quadrantHeight }; // 4th quadrant

	//drawing the lines on the window

	SDL_SetRenderDrawColor(renderer, 200, 200, 200, 255);
	SDL_RenderDrawLine(renderer, ww / 2, 0, ww / 2, wh);
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);

	// check if the texture is visible or not and render wich are visible

	if (visibleTextures[0])
		TextureManager::Instance()->drawTexture("png", clickableRect.x, clickableRect.y, quadrantWidth, quadrantHeight, renderer);
	if (visibleTextures[1])
		TextureManager::Instance()->drawTexture("png1", clickableRect1.x, clickableRect1.y, quadrantWidth, quadrantHeight, renderer);
	if (visibleTextures[2])
		TextureManager::Instance()->drawTexture("png2", clickableRect2.x, clickableRect2.y, quadrantWidth, quadrantHeight, renderer);
	if (visibleTextures[3])
		TextureManager::Instance()->drawTexture("png3", clickableRect3.x, clickableRect3.y, quadrantWidth, quadrantHeight, renderer);

	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		case SDL_MOUSEBUTTONDOWN: {

			if (event.button.button == SDL_BUTTON_LEFT) {
				int ww, wh;
				SDL_GetWindowSize(window, &ww, &wh);
				int msx, msy;
				SDL_GetMouseState(&msx, &msy);


				int quadrantWidth = ww / 2;
				int quadrantHeight = wh / 2;
				mouseDownX = msx;
				mouseDownY = msy;



				if (mouseDownX > 0 && mouseDownY < wh / 2 && mouseDownX < ww / 2 && mouseDownY > 0) {
					 // in first quadrant
					visibleTextures[0] = !visibleTextures[0];
				}
				if (mouseDownX > ww / 2 && mouseDownY < wh / 2 && mouseDownY > 0 && mouseDownX < ww) {
					 // in second quadrant
					visibleTextures[1] = !visibleTextures[1];
				}
				if (mouseDownX > 0 && mouseDownY > wh / 2 && mouseDownX < ww / 2 && mouseDownY < wh) {
					 // in third quadrant
					visibleTextures[2] = !visibleTextures[2];
				}
				if (mouseDownX > ww / 2 && mouseDownY > wh / 2 && mouseDownX < ww && mouseDownY < wh) {
					 // in forth quadrant
					visibleTextures[3] = !visibleTextures[3];
				}
			}
		}; break;
		default: break;
		}
	}
}
void Game::update() {


}
bool Game::isRunning() {
	return Game::running;
}
void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	
	Game::clickableRect = { 0 , 0, 0, 0 };
	Game::clickableRect1 = { 0 , 0, 0, 0 };
	Game::clickableRect2 = { 0 , 0, 0, 0 };
	Game::clickableRect3 = { 0 , 0, 0, 0 };
	Game::mouseDownX = 0;
	Game::mouseDownY = 0;
}
Game::~Game() {
	delete window;
	delete renderer;

}