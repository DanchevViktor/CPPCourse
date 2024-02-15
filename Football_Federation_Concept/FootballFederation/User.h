#pragma once
#include <iostream>
using namespace std;
#include <string>
#include<cctype>
#include <algorithm>

class User
{
public:
	User(string, string);

	void setUserName(string);
	void setPassword(string);

	string getUserName();
	string getPassword();

private:
	string m_userName;
	string m_password;
};

