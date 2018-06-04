#include <iostream>
#include "List.h"


using namespace std;



int main() {
	List<int> list;
	list.push_back(5);
	list.push_back(2);
	list.push_back(4);
	list.push_back(1);

	for (size_t i = 0; i < list.getSize(); ++i) {
		cout << list[i] << ' ';
	}
	cout << '\n';

	for (List<int>::Iterator<int> iter = list.begin(); iter != list.end(); ++iter) {
		cout << *iter << ' ';
	}

	cout << '\n';
	system("pause");
	return 0;
}
