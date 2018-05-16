#pragma once
#include "Person.h"
#include <vector>

class Funktor
{
public:
	Funktor(Person* obj);
	bool operator()(Person* person);
	~Funktor();
private:
	Person * pers;
};

