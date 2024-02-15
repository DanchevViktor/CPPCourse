#pragma once

#include<string>
#include<iostream>
using namespace std;

class Drinks
{
public:
	Drinks(string, string, double, int);


	void setName(string);
	void setType(string);
	void setPrice(double);
	void setQuantity(int);

	string getName();
	string getType();
	double getPrice();
	int getQuantity();

	virtual void print();

	virtual double calculatePrice();

private:
	string m_name;
	string m_type;
	double m_price;
	int m_quantity;
};

