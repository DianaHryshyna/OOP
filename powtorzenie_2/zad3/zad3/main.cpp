#include "StringList.h"

int main() {
	list<string> lst;
	lst.push_back("Ala");
	lst.push_back("ma");
	lst.push_back("kota ");

	StringList myList(lst);
	myList + " Ala";
	//Ala
	//ma
	//kota lala
	// Ala
	while (true) {
		try {
			cout << myList << endl;
		}
		catch (exception e) {
			cout << e.what() << endl;
			break;
		}
	}
	
	system("pause");
	return 0;
}