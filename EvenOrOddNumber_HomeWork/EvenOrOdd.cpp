#include <iostream>
using namespace std;



int main()
{
	cout << "Enter how many numbers you would like to check." << endl;
	int number;
	cin >> number;

	for (int i = 0; i < number; i++) {

		cout << "Enter number:" << endl;
		
		int n;
		cin >> n;
	
		if (n % 2 == 0) {
			cout << "Even" << endl;
		}
		else {
			cout << "Odd" << endl;
		}
	}


	return 0;
}

