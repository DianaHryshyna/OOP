#pragma once
#include "Villager.h"
class Household
{
public:
	Household();
	void advance();
	bool isChild();
	void addPerson(Villager* v);
	void output();
	~Household();
private:
	Villager** arr; 
	int current_count;
	int max_e;
};

