#include "Button.h"

Button::Button(SDL_Rect rect )
{
    buttonRect= rect;
}
void Button::drawButton(SDL_Rect rect , SDL_Renderer* ren, bool buttonClicked)
{

}

bool Button::isButtonClicked(SDL_Event event)
{
    if (event.type == SDL_MOUSEBUTTONDOWN) {
        int msx, msy;
        SDL_GetMouseState(&msx, &msy);

        mouseDownX = msx;
        mouseDownY = msy;

        if (msx >= buttonRect.x && msx <= buttonRect.x + buttonRect.w &&
            msy >= buttonRect.y && msy <= buttonRect.y + buttonRect.h) {
            cout << "Button clicked" << endl;
            buttonClicked = true;
            return true;
        }
    }
    buttonClicked =  false;
    return false;
}

