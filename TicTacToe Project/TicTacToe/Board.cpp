#include"Board.h"
#include "Field.h"
#include<iostream>
#include"Player.h"
#include "SDLGame.h"
#include"TextureManager.h"
#include"Button.h"
using namespace std;

Board::Board()   
{
    field[0][0].m_symbol = ' ';
	field[0][0].m_rect = { 0,0,137,136 };

	field[0][1].m_symbol = ' ';
	field[0][1].m_rect = { 137, 0, 137,136 };

	field[0][2].m_symbol = ' ';
	field[0][2].m_rect ={ 274, 0, 137, 136 };

	field[1][0].m_symbol = ' ';
	field[1][0].m_rect = { 0,172,137,136 };

	field[1][1].m_symbol = ' ';
	field[1][1].m_rect = { 137,136,137,136 };

	field[1][2].m_symbol = ' ';
	field[1][2].m_rect = { 274,136,137,136 };

	field[2][0].m_symbol = ' ';
	field[2][0].m_rect = { 0,272,137,136 };

	field[2][1].m_symbol = ' ';
	field[2][1].m_rect = { 137,274,137,136 };

	field[2][2].m_symbol = ' ';
	field[2][2].m_rect = { 274,272,137,136 };

	

}




bool Board::placeMarker(Field field)
{

	// podavam na place marker natisnatata kletka i  koi igrach igrae  i tq slaga suotvetniq simvol v neq 

	// sled kato natisne ready switchvame player 
	
	// trqbva da zapazi reda i kolona ako moje da se sloji marker
	
	if (field.m_symbol == ' ' ) 
	{
		return true;
	}
	
	return false;
}

bool Board::isFull() const
{  // checking if the board is full 
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (field[i][j].m_symbol == ' ') {
				return false;
			}
		}
	}
	return true;
}

char Board::checkWinner() const
{
	// check rows 
	for (int i = 0; i < 3; i++) {
		if (field[i][0].m_symbol == field[i][1].m_symbol &&
			field[i][1].m_symbol == field[i][2].m_symbol && 
			field[i][0].m_symbol != ' ') {
			return field[i][0].m_symbol;
		}
	}
	//check colums
	for (int j = 0; j < 3; j++) {
		if (field[0][j].m_symbol == field[1][j].m_symbol &&
			field[1][j].m_symbol == field[2][j].m_symbol && 
			field[0][j].m_symbol != ' ') {
			return field[0][j].m_symbol;
		}
	}
	//check diagonals 
	if ((field[0][0].m_symbol == field[1][1].m_symbol && 
		field[1][1].m_symbol ==  field[2][2].m_symbol  ||
		field[0][2].m_symbol == field[1][1].m_symbol &&
		field[1][1].m_symbol == field[2][0].m_symbol && 
		field[1][1].m_symbol != ' ')) { 
		
		return field[1][1].m_symbol;
	}
	 
}

void Board::handleEvent(SDL_Event event)
{
	if (event.type == SDL_MOUSEBUTTONDOWN) {
		int msx, msy;
		SDL_GetMouseState(&msx, &msy);

		mouseDownX = msx;
		mouseDownY = msy;
		
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {

				if (msx >= field[i][j].m_rect.x && msx <= field[i][j].m_rect.x + field[i][j].m_rect.w &&
					msy >= field[i][j].m_rect.y && msy <= field[i][j].m_rect.y + field[i][j].m_rect.h) {
					cout << "clicked in field" << i << " " << j  << endl;


					if (placeMarker(field[i][j])) 
					{
						if (activePlayer == "Viktor")
						{
							field[i][j].m_symbol = 'O';
						}
						else if(activePlayer == "Reni")
						{
							field[i][j].m_symbol = 'X';
						}
						
					}
					

					cout << field[i][j].m_symbol;
				}
				
				
			}
		}
		
	}
}


void Board::renderBoard(SDL_Renderer* renderer){
	
	TextureManager::Instance()->drawTexture("Board", 0, 0, 411, 408, renderer);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (field[i][j].m_symbol == 'X') {
				// narisuvai teksturata 
				TextureManager::Instance()->drawTexture("Player2", field[i][j].m_rect.x+22,field[i][j].m_rect.y+22, 100, 100, renderer);
			}
			if (field[i][j].m_symbol == 'O') {
				//narisuvai teksturata 
				cout << i << " "<< j << endl;
				
				TextureManager::Instance()->drawTexture("Player1", field[i][j].m_rect.x +22, field[i][j].m_rect.y +22, 100, 100, renderer);

			}
		}
	}
	
}






