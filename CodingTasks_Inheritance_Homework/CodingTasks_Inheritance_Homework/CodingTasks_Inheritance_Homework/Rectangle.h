#pragma once
#include"Shape.h"
class Rectangle:public Shape
{
public:
	Rectangle(string);

	void draw()const  override;
};

