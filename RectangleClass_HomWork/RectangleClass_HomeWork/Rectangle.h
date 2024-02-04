#pragma once
using namespace std;
#include<iostream>
#include "Point.h"
class Rectangle
{
public:

	Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4);
	const Point& getP1() const;
	void setP1(const Point& p1);
	void setP2(const Point& p2);
	const Point& getP2() const;

	bool isRectangle();
	bool isSquare();

	int calculateLength(int, int);

private:
	Point p1, p2, p3, p4;
	
	
};

