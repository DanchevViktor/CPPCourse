#pragma once
#include "Shape.h"

class Rectangle:public Shape
{
public:
	Rectangle(double, double);

	double area() override;
	

private:
	double m_width;
	double m_height;
};

