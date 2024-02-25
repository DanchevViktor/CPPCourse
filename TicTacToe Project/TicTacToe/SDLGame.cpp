#include "SDLGame.h"
#include <iostream>
#include"Field.h"
#include"Board.h"
#include"SoundManager.h"
 // prehvurlqme game logikata v sdlGame 
// 1. da opravq board spored event 
// 2. da ima render funkciq 

// 3. flow na igrata 

//klas buton sus sustoqniq
// priema event 
// sudurja 3 teksturi 
 
bool SDLGame::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
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

				TextureManager::Instance()->loadTexture("Assets/Board.png", "Board", renderer);
				TextureManager::Instance()->loadTexture("Assets/Undo.png", "Undo", renderer);
				TextureManager::Instance()->loadTexture("Assets/Info.png", "Info", renderer);
				TextureManager::Instance()->loadTexture("Assets/Ready.png", "Ready", renderer);
				TextureManager::Instance()->loadTexture("Assets/Player11.png", "Player1", renderer);
				TextureManager::Instance()->loadTexture("Assets/Player22.png", "Player2", renderer);
				TextureManager::Instance()->loadTexture("Assets/StartButton.png", "Start", renderer);
				TextureManager::Instance()->loadTexture("Assets/StartPressed.png", "StartActive", renderer);
				TextureManager::Instance()->loadTexture("Assets/StartInactive.png", "StartInactive", renderer);
				


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
void SDLGame::render() {
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderClear(renderer);	
	
board.renderBoard(renderer);
	
	TextureManager::Instance()->drawTexture("Start", 420, 50, 347, 108, renderer);
	TextureManager::Instance()->drawTexture("Info", 20, 450, 100, 100, renderer);
	TextureManager::Instance()->drawTexture("Undo", 680,450, 100, 100, renderer);
	TextureManager::Instance()->drawTexture("Ready", 500, 450, 100, 100, renderer);
	

	SDL_RenderPresent(renderer);
}

void SDLGame::handleEvents() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
           running = false;
        }
        else if (event.type == SDL_MOUSEBUTTONDOWN) {
            int msx, msy;
            SDL_GetMouseState(&msx, &msy);
				if (event.button.button == SDL_BUTTON_LEFT) {
					if (msx >= 420 && msx <= 420 + 347 &&
						msy >= 50 && msy <= 50 + 108) {
						cout << "Start Button clicked" << endl;
						isStartClicked = true;
					}

				}
			
		}
	}
	startGame();
	}
	//if (SDL_PollEvent(&event)) {
	//	switch (event.type) {
	//	case SDL_QUIT: running = false; break;
	//	case SDL_MOUSEBUTTONDOWN: {
	//		 
	//		if (event.button.button == SDL_BUTTON_LEFT) {
	//			cout << "mouse button left" << endl;
	//			int msx, msy;
	//			SDL_GetMouseState(&msx, &msy);

	//			mouseDownX = msx;
	//			mouseDownY = msy;

	//			cout << msx << " " << msy;
	//			
	//			board.handleEvent(event);
	//			
	//			// tova trqbva da otide v button class 

	//			if (msx >= 420 && msx <= 420 + 347 &&
	//				msy >= 50 && msy <= 50 + 108) {
	//				cout << "Start Button clicked" << endl;
	//				startButtonClicked = true;
	//			}
	//			else {
	//				startButtonClicked = false;
	//			}

	//			if (msx >= 20 && msx <= 20 + 100 &&
	//				msy >= 450 && msy <= 450 + 100) {
	//				cout << "Info Button clicked" << endl;
	//				infoButtonClicked = true;
	//			}
	//			else {
	//				infoButtonClicked = false;
	//			}

	//			if (msx >= 680 && msx <= 680 + 100 &&
	//				msy >= 450 && msy <= 450 + 108) {
	//				cout << "Undo Button clicked" << endl;
	//				undoButtonClicked = true;
	//			}
	//			else {
	//				undoButtonClicked = false;
	//			}

	//			if (msx >= 500 && msx <= 500 + 100 &&
	/*				msy >= 450 && msy <= 450 + 108) {
					cout << "Ready Button clicked" << endl;
					readyButtonClicked = true;
				}
				else {
					readyButtonClicked = false;
				}
				
			}
		}; break;
		default: break;
		}
	}*/

void SDLGame::update() {


}
bool SDLGame::isRunning() {
	return SDLGame::running;
}

void SDLGame::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
SDLGame::SDLGame() {
	SDLGame::window = NULL;
	SDLGame::renderer = NULL;
	SDLGame::running = true;


	SDLGame::mouseDownX = 0;
	SDLGame::mouseDownY = 0;

	
	isStartClicked = false;
	gameOver = false;

	Player player1("Viktor", 'O');
	Player player2("Reni", 'X');
	currentPlayer = &player1;
}
SDLGame::~SDLGame() {
	delete window;
	delete renderer;

}



void SDLGame::startGame() { // izpulnqvame igrata dokato ne prikluchi 
	if (isStartClicked == true) {
		cout << "game started";
		while (!gameOver) {
			SDL_Event event;
			if (SDL_PollEvent(&event)) {
				
				if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					int msx, msy;
					SDL_GetMouseState(&msx, &msy);
					mouseDownX = msx;
					mouseDownY = msy;

					if (event.button.button == SDL_BUTTON_LEFT) 
					{

						if (msx >= 500 && msx <= 500 + 100 &&
							msy >= 450 && msy <= 450 + 108) {
							cout << "Ready Button clicked" << endl;
							isReadyClicked = true;

							break;
						}
						board.handleEvent(event);
						
					}
				}
			}
			if (isReadyClicked)
			{
				switchPlayer();
			}
			if (checkWin() || checkDraw()) {
				gameOver = true;


				if (checkWin()) {
					char winnerSymbol = board.checkWinner();

					if (winnerSymbol == 'X') {
						//cout <<player2.getName() << " WINS!" << endl;
						gameOver = true;
					}
					else if (winnerSymbol == 'O') {
						//cout << player2.getName() << " WINS!" << endl;
						gameOver = true;
					}
				}
				else {
					cout << "PARITY" << endl;
					gameOver = true;
				}
			}
			
			
		}
	}
}





void SDLGame::switchPlayer() {
	if (isReadyClicked) {
		if (board.activePlayer == "Viktor")
		{
			board.activePlayer = "Reni";
		}
		else{
			board.activePlayer = "Viktor";

		}

	}

}



bool SDLGame::checkWin() {
	char winner = board.checkWinner();
	if (winner == 'X' || winner == 'O') {
		return true;
	}
	return false;

}

bool SDLGame::checkDraw() { // proverqva dali duskata e pulna i dali nqma pobeditel i edva togava e ravno
	if (board.isFull() && !checkWin()) {
		return true;
	}
	return false;
}


void SDLGame::loadAndPLaySound() {

	SoundManager::Instance()->load("Assets/Game.mp3", "Music", 1);

	SoundManager::Instance()->playMusic("Music", 0, 5000);


}