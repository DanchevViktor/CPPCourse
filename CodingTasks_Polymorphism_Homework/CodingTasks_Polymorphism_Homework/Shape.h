#pragma once
using namespace std;
#include<iostream>

class Shape
{
public:
	Shape(string);
	virtual double area() = 0; 
	virtual void draw() = 0;
	virtual ~Shape();
	
protected:
	string m_color;
};

