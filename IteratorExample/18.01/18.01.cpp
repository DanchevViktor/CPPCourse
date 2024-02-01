using namespace std;
#include <iostream>
#include<list>
#include <algorithm>
#include<iterator>

template <typename T > void printList(const list<T>& listRef) {
	if (listRef.empty()) {
		cout << "list is empty";
	}
	else {
		ostream_iterator <T> output(cout, " ");
		copy(listRef.begin(), listRef.end(), output);
	}

}

int main() {
	cout << "Enter number or 0 for end." << endl;

	int input = 1;
	

	list <int> values;

	while (input != 0) {
		cin >> input;
		if (input != 0) {
			values.push_back(input);
		}
		else
			break;
	}
	printList(values);

	size_t listSize = values.size();
	int sum = 0;

	for (int element : values) {
		sum += element;
	}


	for (list<int>::iterator it = values.begin(); it != values.end(); it++) {
		cout << *it << endl;
		sum += *it;
	}

	cout << endl;
	cout <<"Sum of elements is:" <<  sum << endl;

	return 0;
}