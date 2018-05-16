#include <iostream>
#include "Funktor.h"
#include "Person.h"

using namespace std;

int main() {
	Person person("Vasilisa", 5);
	Person person1("Totoshka", 6);
	person<<=&person1;
	person<<=&Person("Din", 4);
	
	
	cout << Funktor(&person)(&person1);

	system("pause");
	return 0;
}