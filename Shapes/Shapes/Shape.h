#pragma once
using namespace std;
#include <iostream>

class Shape
{
public:
	Shape(int);

	void setA(int);
	virtual void setArea(int);

	virtual int getA();
	virtual double getArea();
	

	virtual void print();

private:
	int m_a;
	int m_area;
};

