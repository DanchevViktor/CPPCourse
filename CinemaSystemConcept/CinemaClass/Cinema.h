#pragma once
#include<string>
using namespace std;
#include"Room.h"
#include<vector>

class Cinema
{
public:
	Cinema(string, string, vector<Room>);
	void setName(string);
	void setAdress(string);
	
	string getName();
	string getAdress();
	
	void setRoomList(vector<Room>);
	
	void addRoomToList(Room);
	vector<Room> getRoomList();

	void print();

private:
	string m_name;
	string m_adress;
	vector<Room> m_roomsList;
};

