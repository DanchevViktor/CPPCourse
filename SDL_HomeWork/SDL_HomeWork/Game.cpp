#include "Game.h"


Game::Game()
{
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	
}

Game::~Game()
{
}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		cout << "SDL_Init success." << endl;

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) // init window success
		{
			cout << "Window creation successful." << endl;
			
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) // init render success 
			{
				cout << "Renderer creation successful." << endl;
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // color of teh window

				//adding image 
				// creating temporary surface of the image  pixels
				SDL_Surface* tempSurface = IMG_Load("assets/png1.png"); // temporary surface
				
				//tranfer the pixels from the surface to texture
				texture = SDL_CreateTextureFromSurface(renderer, tempSurface); 

				SDL_FreeSurface(tempSurface);

				// getting the settings of the texture like height, width 
				// this sets the images  width and height with the textures width and height 
				
				SDL_QueryTexture(texture, NULL, NULL, &srcRect.w, &destRect.h);


				srcRect.x = 0;
				srcRect.y = 0;
				srcRect.w = 350;
				srcRect.h = 410;

				destRect.x = 0;
				destRect.y = 0;
				destRect.w = 350;
				destRect.h = 410;


			}
			else {
				cout << "Render init failed." << endl;
				return false;
			}
		}
		else {
			cout << "Window init failed." << endl;
			return false;
		}

	}
	else {
		cout << "SDL init failed." << endl;
		return false;
	}
	cout << "Init successful." << endl;
	running = true;
	return true;
}

void Game::render()
{
	SDL_RenderClear(renderer); // clears the renderer for new drawing 

	SDL_RenderCopy(renderer, texture, &srcRect, &destRect); // draws on the screen the texture


	SDL_RenderPresent(renderer);  // displays the drawing of renderCopy
	
}

void Game::update()
{
	
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);

	static int speed = 1; // static because its getting reset on every iteration of the game loop
	int maxSpeed = 10;
	destRect.x += speed;

	// check if the img is out of the borders of the window

	if (destRect.x + destRect.w > ww || destRect.x < 0) {
		// reverse the direction 
		speed = -speed;
		destRect.x += speed;

		speed *= 2; // increasing the speed on every end of the window

		if (speed > maxSpeed) {
			speed = maxSpeed;
		}
	}


}

void Game::handleEvents()
{
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;
		}

	}
}

void Game::clean()
{
	cout << "cleaning" << endl;
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning()
{
	return Game::running;
}
