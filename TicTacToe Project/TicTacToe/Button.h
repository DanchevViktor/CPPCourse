#pragma once
#include"SDL.h"
#include<iostream>
using namespace std;


class Button
{
public:
	Button(SDL_Rect);

	void drawButton(SDL_Rect,SDL_Renderer*,bool);
	bool isButtonClicked(SDL_Event);


private:
	SDL_Rect buttonRect;
	int mouseDownX, mouseDownY;
	bool buttonClicked = false;


};

