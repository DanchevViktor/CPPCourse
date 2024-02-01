#include "Order.h"

Order::Order(int number,string date, double sum) {
	setNumber(number);
	setDate(date);
	
}

void Order::setDate(string date)
{
	this->m_date = date;
}

void Order::addDrinks(Drinks* drinks)
{
	this->drinks.push_back(drinks);
}

void  Order::setNumber(int number) 
{
	this->m_number = number;
}

int Order::getNumber() 
{
	return this->m_number;
}

string Order::getDate() 
{
	return this->m_date;
}

double Order::getSum() 
{
	return this->m_sum;
}

void Order::print()
{
	for (int i = 0; i < drinks.size(); i++) {
		 this->drinks.at(i)->print();
		 cout << endl;
	}

	calculateSum();
	cout << getDate() << " Sum : " << getSum() << " ";
}

double Order::calculateSum() 
{
	double sum =0;
	for (int i = 0; i < drinks.size(); i++) {
		sum += this->drinks.at(i)->calculatePrice();
	}
	this->m_sum = sum;
	return this->m_sum;
}

vector<Drinks*> Order::getDrinks()
{
	return this->drinks;
}
