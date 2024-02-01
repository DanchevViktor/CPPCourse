#include "Screening.h"
using namespace std;
#include <iostream>

Screening::Screening(string movieName,int soldTickets){
	setMovieName(movieName);
	setSoldTickets(soldTickets);
}

void Screening::setMovieName(string movieName) {
	if (movieName.length() > 5) {
		m_movieName = movieName;
	}
	else {
		m_movieName = "";
		cerr << "Movie name too short" << endl; // izkarva v cherveno kato greshka
	}
}

void Screening::setSoldTickets(int soldTickets) {
	if (soldTickets >= 0) {
		m_soldTickets = soldTickets;
	}
	else {
		m_soldTickets = 0;
	}
}

string Screening::getMovieName() {
	return m_movieName;
}
int Screening::getSoldTickets() {
	return m_soldTickets;
}

void Screening::print() {
	cout << "Projection is: "
		<< this->getMovieName() << " "
		<< this->getSoldTickets() << " " << endl;
}