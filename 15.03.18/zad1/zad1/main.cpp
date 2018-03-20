#include <iostream>
#include "User.h"

using namespace std;
int main() {
	User p = User("login", "passwd");
	if (p.authorize("login", "passwd")) {
		cout << "Ok" << endl;
	}
	else {
		cout << "Sproboj ponownie" << endl;
	}

	system("pause");
	return 0;
}