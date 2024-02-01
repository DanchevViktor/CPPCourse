#pragma once
#include"TwoDimensionalShape.h"
#include <string>
class Rectangle:public TwoDimensionalShape
{
public:
	Rectangle(int, int, int, string, char, int);
	
	void setSideB(int);
	void setSideB(int);

	virtual double getArea();
	
	int getSideB();
	
	virtual void print();

private:
	
	int m_sideB;

};

