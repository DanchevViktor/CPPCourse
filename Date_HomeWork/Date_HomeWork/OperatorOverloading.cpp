using namespace std;
#include <iostream>
#include "Date.h"

int main()
{
	Date d1;
	

	cout << "Enter date in this format: dd/mm/yy " << endl;
	cin >> d1;
	
	cout << "prefix operator: " << endl;
	cout << --d1 << endl;

	cout << "postfix operator: " << endl;
	cout << d1-- << endl;
	


	return 0;
}

