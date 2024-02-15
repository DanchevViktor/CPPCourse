#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"
class Game {
public:
	Game();
	~Game();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	SDL_Rect clickableRect;
	SDL_Rect clickableRect1;
	SDL_Rect clickableRect2;
	SDL_Rect clickableRect3;
	
	int mouseDownX, mouseDownY;
	bool visibleTextures[4] = { false, false, false, false };
};