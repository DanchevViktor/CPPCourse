#include "Room.h"
#include"Screening.h"
#include <iostream>
Room::Room(string roomName, int capacity) {
	setName(roomName);
	setSeats(capacity);
}

Room::Room(string name, int capacity, vector<Screening> screeningList)
	:m_screeningList(screeningList) {
	setName(name);
	setSeats(capacity);
}

void Room::addScreening(Screening obj) { //  dobavqme obekt ot klasa screening 
	m_screeningList.push_back(obj);
}

void  Room::print() {
	cout << "Hall is: " << m_name << " " << " with " << m_seats << " seats" << " ";
	for (int i = 0; i < m_screeningList.size(); i++) {
		m_screeningList.at(i).print();
	}
}

vector<Screening> Room::getScreeningList() {
	return m_screeningList;
}

void Room::setName(string name) {
	m_name = name;
}
void Room::setSeats(int capacity) {
	m_seats = capacity;
}

