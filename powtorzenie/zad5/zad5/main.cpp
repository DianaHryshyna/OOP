#include <iostream>
#include "Array.h"

using namespace std;

int main() {
	Array a(5);
	cout << a.index_ok(4) << endl;
	cout << a.at(4);
	system("pause");
	return 0;
}