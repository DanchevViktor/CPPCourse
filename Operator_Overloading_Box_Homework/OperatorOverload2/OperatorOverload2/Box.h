#pragma once
using namespace std;
#include <iostream>

class Box
{

public:
	Box operator+(Box b);
	Box(double, double,double);

	void setLength(double);
	void setWidth(double);
	void setHeight(double);

	double getHeight();
	double getLength();
	double getWidth();

	void print();

private:
	double m_lenght;
	double m_width;
	double m_heigth;




};

