#pragma once
#include<iostream>
using namespace std;

class Shape
{
public:
	Shape(string);

	virtual void draw();
	virtual ~Shape();

protected:
	string m_color;
};

