#include <iostream>
using namespace std;

/*
Задача 1: Напише следния код:

Напишете програма на С++, която:

Използва въведени от потребител цели числа

Проверява дали числото е четно или нечетно

Ако числото е четно, на екрана се извежда “even”, ако е нечетно – “odd”
*/

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

