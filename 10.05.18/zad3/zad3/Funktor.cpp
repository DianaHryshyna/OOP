#include "Funktor.h"

Funktor::Funktor(Person* obj): pers(obj)
{}

bool Funktor::operator()(Person * person)
{
	if (pers == person) {
		return true;
	}

	for (int i = 0; i < pers->getNumberChildren(); i++) {
		/*if (person == (*pers)[i]) {
			return true;
		}*/
		if (person == pers->operator[](i)) {
			return true;
		}
	}

	return false;

}


Funktor::~Funktor()
{
}
