#pragma once
using namespace std;
#include<iostream>

class Point
{
public:
	Point(int x, int y);

	int getX() const;
	void setX(int x);

	int getY() const;
	void setY(int y);
	void print();

private:
	int x;
	int y;
};

