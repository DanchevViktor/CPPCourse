#include "TextureManager.h"

bool TextureManager::loadTexture(const char* fileName, string id, SDL_Renderer* ren)
{
	SDL_Surface* tempSurface = IMG_Load(fileName);

	if (tempSurface == 0) {
		return false; // something went wrong
	}
	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
	SDL_FreeSurface(tempSurface);

	if (tex != 0) { // texture created success, save texture to the map
		textureMap[id] = tex; // id is unique name for each texture
		return true;
	}
	return false; // something went wrong
}

void TextureManager::drawTexture(string id, int x, int y, int width, int height, SDL_Renderer* ren, SDL_RendererFlip flip)
{
	SDL_Rect srcRect;
	SDL_Rect destRect;
	srcRect.x = srcRect.y = 0;
	srcRect.w = destRect.w = width;
	srcRect.h = destRect.h = height;
	destRect.x = x;
	destRect.y = y;
	
	SDL_RenderCopy(ren, textureMap[id], &srcRect, &destRect);
}

void TextureManager::drawOneFrameFromTexture(string id,
	int x, int y, // window x,y to drow at
	int width, int height, // width and height of texture
	int currentRow, int currentFrame, // row to start from 
	SDL_Renderer* ren,
	SDL_RendererFlip flip) // flag to flip the texture
{
	SDL_Rect srcRect;
	SDL_Rect destRect;
	srcRect.x = width * currentFrame;
	srcRect.y = height * (currentRow - 1);
	srcRect.w = destRect.w = width;
	srcRect.h = destRect.h = height;
	destRect.x = x;
	destRect.y = y;

	SDL_RenderCopy(ren, textureMap[id], &srcRect, &destRect);


}

TextureManager* TextureManager::instance = 0;
