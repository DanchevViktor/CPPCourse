#pragma once
using namespace std;
#include<iostream>

class Shape
{
public:
	virtual void draw() const {
		cout << "Drawing shape" << endl;
	}
};

