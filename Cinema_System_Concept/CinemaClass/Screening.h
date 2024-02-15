#pragma once
#include<string>
using namespace std;

class Screening
{
public:
	Screening(string, int);

	void setMovieName(string);
	void setSoldTickets(int);
	string getMovieName();
	int getSoldTickets();
	void print();

private:

	string m_movieName;
	int m_soldTickets;
};

