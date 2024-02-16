#pragma once
#include"Shape.h"
#include<iostream>


class Circle:public Shape
{
public:
	Circle(string,double);
	double area() override;
	void draw() override;
	
	
private:
	
	double m_radius;
};

