#pragma once
#include "Drinks.h"
#include <vector>
class Alcoholic:public Drinks
{
public:
	Alcoholic(string,string,double,int,double,double);

	void setVolume(double);
	void setTax(double);

	double getVolume();
	virtual double getTax();
	virtual double calculatePrice();

	virtual void print();

private:
	double m_volume;
	double m_tax;
	

};

