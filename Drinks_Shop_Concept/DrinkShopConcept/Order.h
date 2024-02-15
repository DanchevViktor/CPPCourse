#pragma once
#include<vector>
#include"Drinks.h"

class Order
{
public:
	Order(int,string, double = 0);

	void setDate(string);
	void setNumber(int);

	void addDrinks(Drinks* drinks);
	void print();

	string getDate();
	double getSum();
	int    getNumber();
	double calculateSum();
	vector <Drinks*> getDrinks();

private:

	int m_number;
	string m_date;
	double m_sum;
	vector<Drinks*> drinks;
};

