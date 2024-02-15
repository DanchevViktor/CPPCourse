#include <iostream>
using namespace std;
#include"Shape.h"
#include "Rectangle.h"
#include"Circle.h"

int main()
{
    Circle circle;
    Rectangle rectangle;

    Shape* ptr;
    ptr = &circle;

    ptr->draw();

    ptr = &rectangle;
    ptr->draw();



    return 0;
}

