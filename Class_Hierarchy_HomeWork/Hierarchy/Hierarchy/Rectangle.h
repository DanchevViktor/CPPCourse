#pragma once
#include"Shape.h"
class Rectangle:public Shape
{
public:
	void draw()const override {
		cout << "Drawing rectangle" << endl;
	}
};

