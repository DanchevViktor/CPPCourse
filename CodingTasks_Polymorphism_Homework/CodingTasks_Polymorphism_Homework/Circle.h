#pragma once
#include"Shape.h"
#include<iostream>


class Circle:public Shape
{
public:
	Circle(double);
	double area() override;
	

private:
	
	double m_radius;
};

