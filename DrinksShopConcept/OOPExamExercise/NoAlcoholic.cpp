#include "NoAlcoholic.h"

NoAlcoholic::NoAlcoholic(string name, string type, double price, int quantity, double liters, double tax)
	:Drinks(name, type, price, quantity)
{
	setLiters(liters);
	setTax(tax);
}

void NoAlcoholic::setLiters(double liters)
{
	this->m_liters = liters;
}

void NoAlcoholic::setTax(double tax)
{
	this->m_tax = tax;
}

double NoAlcoholic::getLiters()
{
	return this->m_liters;
}

double NoAlcoholic::getTax()
{
	return this->m_tax;
}
double NoAlcoholic::calculatePrice() {
	return Drinks::calculatePrice() + getTax();
}

void NoAlcoholic::print()
{
	cout << endl;
	Drinks::print();
	cout << getLiters() << getTax() << " ";
	cout << " Price: " << this->calculatePrice();
	cout << endl;
}
