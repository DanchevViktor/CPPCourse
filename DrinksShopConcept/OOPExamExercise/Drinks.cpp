#include "Drinks.h"

Drinks::Drinks(string name, string type, double price, int quantity)
{
    setName(name);
    setType(type);
    setPrice(price);
    setQuantity(quantity);

}

void Drinks::setName(string name)
{
    this->m_name = name;
}

void Drinks::setType(string type)
{
    this->m_type = type;
}

void Drinks::setPrice(double price)
{
    this ->m_price = price;
}

void Drinks::setQuantity(int quantity)
{
    this->m_quantity = quantity;
}

string Drinks::getName()
{
    return this->m_name;
}

string Drinks::getType()
{
    return this->m_type;
}

double Drinks::getPrice()
{
    return this->m_price;
}

int Drinks::getQuantity()
{
    return this->m_quantity;
}




 void Drinks::print()
{
     cout << getName() << " type: " << getType() << " price: " << getPrice() << " quantity: " << getQuantity() << " ";
}

double Drinks::calculatePrice()
{
    return this->m_quantity * this->m_price;
}


