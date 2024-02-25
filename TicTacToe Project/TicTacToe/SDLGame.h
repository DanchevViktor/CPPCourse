#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"
#include"Player.h"
#include"Board.h"
using namespace std;

class SDLGame {
public:
	SDLGame();
	~SDLGame();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents(); // kogato izvikam place marker i podavam field i player  i spored player slagam suotvetniq znak 
	void clean();
	bool isRunning();
	void loadAndPLaySound();
	void startGame();

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;

	bool undoButtonClicked = false;
	bool infoButtonClicked = false;
	bool startButtonClicked = false;

	int mouseDownX, mouseDownY;
	
	Player player1;
	Player player2;
	Player* currentPlayer;

	Board board;
	

	bool gameOver = false;
	bool isReadyClicked = false;
	bool isStartClicked = false;

	void switchPlayer();
	bool checkWin();
	bool checkDraw();

	Field field[3][3]{};

};