using namespace std;
#include <iostream>
#include"Drinks.h"
#include "Alcoholic.h"
#include "NoAlcoholic.h"
#include "Order.h"
#include"User.h"
#include "ShopService.h"
int main()
{

	User user("Viktor");
	User user2("Anna");

	vector<Drinks*> drinks;

	Drinks* alPtr = new Alcoholic("Jim Beam", "Whiskey", 1, 1, 1, 1);
	Drinks* noAlPtr = new NoAlcoholic("Red Bull", "Energy Drink", 1, 1, 1, 1);

	drinks.push_back(alPtr);
	drinks.push_back(noAlPtr);
	
	Order order1(1, "today");
	Order order2(2, "tommorow");
	order1.addDrinks(alPtr);
	order2.addDrinks(noAlPtr);

	vector<User> users;

	users.push_back(user);
	users.push_back(user2);

	

	ShopService Shop;

	user.addOrder(order1) ;
	
	user2.addOrder(order2);

	Shop.addUser(user);
	Shop.addUser(user2);

	Shop.findNumberOfDrinks();


	

	

	return 0;
}

