#include "Game.h"
#include"Shapes.h"

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
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // window color

				


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
	SDL_SetRenderDrawColor(renderer, 255,255,255,255);
	SDL_RenderClear(renderer); // clears the renderer for new drawing 

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);

	/*drawing Pentagon*/

	SDL_SetRenderDrawColor(renderer, 200, 130, 122, 255);

	Shapes::drawPentagon(renderer, ww / 2, wh / 2, 180); //	drawing hexagon

	SDL_SetRenderDrawColor(renderer, 200, 200, 200, 255);

	Shapes::drawHexagon(renderer, ww / 2 + 20, wh / 2 + 20, 200); // drawing hexagon


	SDL_RenderPresent(renderer);  

}

void Game::update()
{

	


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
