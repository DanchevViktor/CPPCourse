#include <iostream>
using namespace std;
#include"SDLGame.h"


SDLGame* game = NULL;
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

int main(int argc,char*argv[])
{

	game = new SDLGame();
	game->init("Tic Tac Toe", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);

	//game->loadAndPLaySound();

	while (game->isRunning()) {
		game->handleEvents();
		game->update();
		game->render();
	}


	

	/*int choice;
	
	cout << "1.TO PLAY" << endl;
	cout << "2.TO DISPLAY INFO" << endl;
	cout << "3.TO QUIT" << endl;

	cin >> choice;

	Game game;

	switch (choice) {

	case 1:
		game.start(); break;
	case 2:
		cout << endl;
		cout << "2 players take turns to put 'X' or 'O'. "
			<< "If any of the players put 3 of his symbols in"
			<< "3 cells wich are next to each other. "
			<< "The player wins."
			<< "If the board is full and there are no winners "
			<< "It's a draw." << endl << endl;
		cout << "4. Return to the menu." << endl; 

	case 3:
		return 0;
	case 4: 
		cout << "1.TO PLAY PRESS ENTER" << endl;
		cout << "2.TO DISPLAY INFO" << endl;
		cout << "3.TO QUIT" << endl; break;
		

	default:break;
		return 0;
	}
*/

	
	return 0;
}

