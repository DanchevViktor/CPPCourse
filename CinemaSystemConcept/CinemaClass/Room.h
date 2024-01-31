#pragma once
#include <string>
#include <vector>
#include "Screening.h"
using namespace std;

class Room
{
public:
	Room(string, int);
	Room(string, int, vector <Screening> );

	// void setScreeningList(vector<Screening>); // priema celiq vektor
	 
	vector<Screening>getScreeningList();
	void addScreening(Screening); // a tova dobavqme 1 projekciq 
	
	void setName(string);
	void setSeats(int);
	
	void print();

private:
	string m_name;
	int m_seats;
	vector<Screening>m_screeningList;
};

