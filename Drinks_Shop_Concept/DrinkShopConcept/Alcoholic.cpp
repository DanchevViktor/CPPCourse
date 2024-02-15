#include "Alcoholic.h"

Alcoholic::Alcoholic(string name, string type, double price, int quantity, double volume, double tax)
	:Drinks(name,type,price,quantity)
{
	setVolume(volume);
	setTax(tax);
}

void Alcoholic::setVolume(double volume)
{
	this->m_volume = volume;
}

void Alcoholic::setTax(double tax)
{
	this->m_tax = tax;
}

double Alcoholic::getVolume()
{
	return this->m_volume;
}

double Alcoholic::getTax()
{
	return this->m_tax;
}

double Alcoholic::calculatePrice()
{
	return Drinks::calculatePrice() * getTax();
}

void Alcoholic::print()
{
	Drinks::print();
	cout << getVolume() << " " << getTax();
	cout << " Price: " << calculatePrice() ;
	cout << endl;
}
