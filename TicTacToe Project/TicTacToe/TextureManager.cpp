#include "TextureManager.h"

bool TextureManager::loadTexture(const char* fileName,string id, SDL_Renderer* ren) {
	SDL_Surface* tempSurface = IMG_Load(fileName);

	if (tempSurface == 0) //somethig went wrong
		return false;
	SDL_Texture* texture = SDL_CreateTextureFromSurface(ren, tempSurface);

	if (texture != 0) {
		textureMap[id] = texture;
		return true;
	}
	return false; //someting went wrong 

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
	SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, 0, flip);

}

TextureManager* TextureManager::instance = 0;