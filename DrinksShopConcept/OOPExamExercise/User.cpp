#include "User.h"

User::User(string name)
{
	setName(name);

}

void User::setName(string name)
{
	this->m_name = name;
}

void User::addOrder(Order obj)
{
	this->orders.push_back(obj);
}

string User::getName() 
{
	return this->m_name;
}

vector<Order> User::getOrders()
{
	return this->orders;
}




void User::print()
{
	cout << "Name: " << getName() << " "<< endl;
	for (int i = 0; i < orders.size(); i++) {
		orders.at(i).print() ;
		cout << endl;
	}

}

