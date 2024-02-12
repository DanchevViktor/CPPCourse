#pragma once
#include<iostream>
#include "WorkStation.h"
using namespace std;

class EmployeesWorkstations
{
public:

	EmployeesWorkstations(string, string, string, string, string, string);
	
	void setName(string);
	void setType(string);
	void setAge(string);
	
	string getName()const;
	string getType()const;
	string getAge() const;


	void print() const;

private:
	string m_name;
	string m_type;
	string m_age;
	WorkStation workStation;
};

