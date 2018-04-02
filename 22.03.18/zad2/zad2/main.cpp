#include <iostream>
#include "Villager.h"
#include "Household.h"

int main() {
	srand(unsigned(time(nullptr)));
	Household h;
	for (int i = 0; i < 20; ++i) {
		h.advance();
	}
	system("pause");
	return 0;
}