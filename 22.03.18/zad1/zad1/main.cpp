#include <iostream>
#include <string>
#include "Villager.h"

int main() {
	Villager* v = new Villager("Piotr", 18, 19, true);
	//Villager v1(*v);

	Villager* v1 = new Villager();
	v->advance();
	v->advance();
	system("pause");
	return 0;
}