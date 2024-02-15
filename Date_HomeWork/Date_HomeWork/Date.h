#pragma once
using namespace std;
#include<iostream>
#ifndef DATE_H
#define DATE_H

class Date
{

	friend ostream& operator<<(ostream&, const Date&);
	friend istream& operator>>(istream&,  Date&);

public:
	Date(int d=1,int m=1,int y=1996);

	void setDate(int,int,int);
	
	Date& operator--();
	Date& operator--(int); // put int in brackets just for readability to know that its postfix overload
	
	bool isLeepYear(int) const;
	bool endOfMonth(int) const ;

private:
	int m_day;
	int m_month;
	int m_year;

	static const int m_numberOfDays[];

	void increment();


};
#endif

