#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

void posortowac(vector<Person*> children) {
	sort(children.begin(), children.end());
}



int main() {
	Person obj("Sveta", 6);
	Person obj2("Tim", 7);
	Person obj3("Diana", 5);
	obj<<=(&obj2);
	obj<<=(&obj3);
	
	obj[1];
	obj.sortChildren();
	obj.output();
	system("pause");
	return 0;
}