#pragma once
#include"Shape.h"

class ThreeDimensionalShape:public Shape
{
public:
	ThreeDimensionalShape(int,int); // priema a, h 
	
	void setH(int);

	virtual double getArea();
	double getVolume();
	int getH();

	virtual void print();

private:
	int m_h;
};

