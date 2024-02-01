#include "Cinema.h"
#include<iostream>


Cinema::Cinema(string name, string adress, vector<Room> rooms) {
	setName(name);
	setAdress(adress);
	setRoomList(rooms);

}

void Cinema::print() {
	cout << "Cinema name : " << getName() << " adress : " << m_adress << " ";
	for (int i = 0; i < m_roomsList.size(); i++) {
		m_roomsList.at(i).print();
		cout << endl;
	}
}

void Cinema::addRoomToList(Room room) {
	m_roomsList.push_back(room);
}
void Cinema::setRoomList(vector<Room> rooms) {
	m_roomsList = rooms;
}

void Cinema::setName(string name) {
	m_name = name;
}

string Cinema::getName() {
	return m_name;
}

void Cinema::setAdress(string adress) {
	m_adress = adress;

}

string Cinema::getAdress() {
	return m_adress;
}
