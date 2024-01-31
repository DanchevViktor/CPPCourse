#pragma once
#include"Car.h"
class Luxury:public Car
{
public: Luxury(string, string, string, string, string, string,double, double, double, double);
	void setExtraLux(double);
	double getExtraLux();

	void print();

private:
	double m_extraLux;

};

