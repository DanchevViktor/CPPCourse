#pragma once
using namespace std;
#include <iostream>
#include "Book.h"

class Member
{
public:

	Member(string, int, string);

	void setName(string);
	void setAge(int);
	void setID(string);

	void display();

	string getName();
	int getAge();
	string getID();

	void borrowBook(Book*);

private:
	string m_name;
	int m_age;
	string m_memberID;
};

