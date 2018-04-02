#include "Household.h"
#include "Villager.h"
#include <iostream>

Household::Household(){
	this->max_e = 10; 
	this->current_count = 0;
	arr = new Villager*[max_e];
	Villager* v_ptr;
	for (size_t i = 0; i < 4; i++)
	{
		v_ptr = new Villager();
		arr[i] = v_ptr;
		++current_count;
	}
}

void Household::advance() {
	for (int i = 0; i < current_count; ++i) {

		arr[i]->advance();

		if (arr[i] == nullptr) {
			--current_count; 
			for (int j = i; j < current_count; ++j) {
				arr[i] = arr[i + 1];
			}
		}
	}

	if (isChild() == true) {
		Villager* v = new Villager();
		v->setAge(0);
		addPerson(v);
	}
}

bool Household::isChild()
{
	if (current_count == max_e) {
		return false;
	}

	bool woman_suit = false;
	bool man_suit = false;
	bool have_child = false;

	for (int i = 0; i < current_count; ++i) {

		if ((arr[i]->isMale() == true) 
			&& (arr[i]->getAge() >= 18) 
			&& (arr[i]->getAge() <= 40)) {
			
			man_suit = true;
		}

		if ((arr[i]->isMale() == false)
			&& (arr[i]->getAge() >= 18)
			&& (arr[i]->getAge() <= 40)) {
			
			woman_suit = true;
		}

		if (arr[i]->getAge() < 5) {
			have_child = true;
		}
	}
	if (man_suit == true && have_child == false && woman_suit == true) {
		return true;
	}
	else {
		return false;
	}
}

void Household::addPerson(Villager* v)
{
	if (current_count < max_e) {
		arr[current_count] = v;
		current_count++;
    }
}


Household::~Household()
{
}
