#pragma once
using namespace std;
#include<iostream>
class Employee
{
public:
	Employee(string, string, string);

	void setName(string);
	void setID(string);
	void setPosition(string);

	void display() const;

	string getName();
	string getID();
	string getPosition();

private:
	string m_name;
	string m_employeeID;
	string m_position;
};

