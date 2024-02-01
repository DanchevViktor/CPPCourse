#pragma once
#include<vector>
#include"User.h"
using namespace std;

class ShopService
{
public:
	void addUser(User obj);
	void findNumberOfDrinks();
	
private:

	vector<User> users;
};

