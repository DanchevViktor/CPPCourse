#pragma once
#include"Drinks.h"

class NoAlcoholic:public Drinks
{
public:
	NoAlcoholic(string,string,double,int,double, double);

	void setLiters(double);
	void setTax(double);

	double getLiters();
	double getTax();

	virtual void print();
	virtual double calculatePrice();

private:
	double m_liters;
	double m_tax;
};

