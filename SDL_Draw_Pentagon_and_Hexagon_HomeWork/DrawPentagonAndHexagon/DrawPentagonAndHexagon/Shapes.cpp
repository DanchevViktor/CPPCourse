#include "Shapes.h"

void Shapes::drawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius)
{
	//Midpoint Circle Algorithm
	const int diameter = radius * 2;
	int x = (radius - 1);
	int y = 0;
	int cx = 1;
	int cy = 1;
	int error = cx - diameter;

	while (x >= y) {
		SDL_RenderDrawPoint(renderer, centerX + x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX + x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY + x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY + x);
		if (error <= 0) {
			y++;
			error += cy;
			cy += 2;
		}
		if (error > 0) {
			x--;
			cx += 2;
			error += cx - diameter;
		}
	}
}

void Shapes::drawPentagon(SDL_Renderer* renderer,
	int centerX, int centerY, int side)
{
	centerX += 100;
	centerY += 100; 

	const double pi = 3.14159265358979323846;
	double angle = ((360 / 5) * (pi / 180));// must be in radians because of the sin and cos 
	//72 is because every angle between two lines is 72 
	double x[5], y[5]; // the coordinates for every point of the figure

	for (int i = 0; i < 5; ++i) {
		
		x[i] = centerX + side * cos(i * angle);
		y[i] = centerY + side * sin(i * angle);


	}

	//we set the color we want
	
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	
	for (int i = 0; i < 4; ++i) {
		
		
		SDL_RenderDrawLine(renderer, x[i], y[i], x[i + 1], y[i + 1]);
	}
	//we are left with r=the last one  so, cuse we need to link the last with the first
	SDL_RenderDrawLine(renderer, x[4], y[4], x[0], y[0]);
}
void Shapes::drawHexagon(SDL_Renderer* renderer,
	int centerX, int centerY, int side)
{
	centerX -= 100;
	centerY -= 100;

	const double pi = 3.14159265358979323846;
	double angle = ((360 / 6) * (pi / 180));// must be in radians because of the sin and cos 
	double x[6], y[6]; // the coordinates for every point of the figure

	for (int i = 0; i < 6; ++i) {
		
		
		x[i] = centerX + side * cos(i * angle);
		y[i] = centerY + side * sin(i * angle);
	}

	//we set the color we want
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	
	for (int i = 0; i < 5; ++i) {
		
		SDL_RenderDrawLine(renderer, x[i], y[i], x[i + 1], y[i + 1]);
	}
	
	SDL_RenderDrawLine(renderer, x[5], y[5], x[0], y[0]);
}