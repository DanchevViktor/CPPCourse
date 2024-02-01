#include "ShopService.h"
#include <map>


void ShopService::addUser(User obj) 
{
	this->users.push_back(obj);
}


void ShopService::findNumberOfDrinks(){
	map <string, int> userDrinks;
	for (int i = 0; i < this->users.size(); i++) {
		vector<Order> order = users.at(i).getOrders();
		for (int j = 0; j < order.size(); j++) {
			vector<Drinks*> drink = order.at(j).getDrinks();
			for (int k = 0; k < drink.size(); k++) {
				userDrinks.insert({ drink.at(k)->getName(), drink.at(k)->getQuantity() });


			}

			for (map<string, int>::iterator it = userDrinks.begin(); it != userDrinks.end(); ++it)
				std::cout << it->first << " => " << it->second << endl;
			
		}
	}

}


