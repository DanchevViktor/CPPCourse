#pragma once
#include<iostream>
#include<SDL.h>

using namespace std;

class Game
{
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

	SDL_Texture* texture; // get pixels from image
	SDL_Rect srcRect;  //  initial coordinates for the image
	SDL_Rect destRect; // streches the image to this rectangle size




};

