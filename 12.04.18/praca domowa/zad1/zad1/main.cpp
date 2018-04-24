#include <iostream>
#include "Account.h"

int main() {
	Account person;
	Account person1;
	Account person2;

	cout << "id:" << person.getId() << endl;
	cout << "id:" << person1.getId() << endl;
	cout << "id:" << person2.getId() << endl;
	cout << "count:" << Account::getCount() << endl;
	system("pause");
	return 0;
}