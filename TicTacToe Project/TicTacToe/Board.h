#pragma once
#include"Field.h"
#include"SDL.h"
#include "Player.h"


class Board
{
public:
	Board();


	bool placeMarker(Field);
	bool isFull() const;
	char checkWinner() const;
	

	void handleEvent(SDL_Event);
	void renderBoard(SDL_Renderer*);
	
	string activePlayer = "Viktor";
	bool readyClicked;

private:
	Field field[3][3]{};
	int mouseDownX, mouseDownY;
	

};

