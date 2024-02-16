#pragma once
#include "Shape.h"

class Rectangle:public Shape
{
public:
	Rectangle(string,double, double);

	double area() override;
	void draw();
	

private:
	double m_width;
	double m_height;
};

