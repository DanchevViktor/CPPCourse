#include "Game.h"

Game::Game()
{
    Game::window = NULL;
    Game::renderer = NULL;
    Game::running = true;
    Game::currentFrame = 0;
    Game::currentRow = 1;
}

Game::~Game()
{
}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        cout << "SDL Init success";
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window != 0) {
            cout << "Window created successfuly";
            renderer = SDL_CreateRenderer(window, -1, 0);
            if (renderer != 0) {
                cout << "Renderer creation success";
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

                TextureManager::Instance()->loadTexture("assets/bird.png","bird",renderer);
                
            }
            else {
                cout << "Renderer init failed";
                return false;
            }
        }
        else {
            cout << "Window init failed";
            return false;
        }
    }
    else {
        cout << "SDL init failed";
        return false;
    }
    cout << "Init success";
    running = true;
    return true;
}

void Game::render()
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // white color
    SDL_RenderClear(renderer);


    
    TextureManager::Instance()->drawOneFrameFromTexture("bird", spriteX, spriteY, 176, 178, currentRow, currentFrame, renderer);

    

    SDL_RenderPresent(renderer);
}

void Game::update()
{
    
    int framesPerRow = 4;
    int numberOfFramesInSpriteSheet = 8;
    int animationSpeed = 200;

    currentFrame = int(((SDL_GetTicks() / animationSpeed) % framesPerRow));
    
    currentRow = currentFrame / framesPerRow;
   
    if (currentFrame > framesPerRow) {
        currentRow = 2; 
       
    }
    else{        
        currentRow = 1;
    }
    
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
    cout << "Cleaning game";
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}

bool Game::isRunning()
{
    return Game::running;
}

