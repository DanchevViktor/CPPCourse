#pragma once
#include <string>
#include<iostream>
#include <vector>
#include "Order.h"

using std::string;
class User
{
public:
	User(string);

	void setName(string);
	void addOrder(Order obj);

	void print();
	string getName();
	vector<Order> getOrders();

private:
	string m_name;
	vector<Order> orders;
};

