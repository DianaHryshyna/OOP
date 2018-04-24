#include "Account.h"

int Account::count = 0;

Account::Account()
{	
	id = count;
	string name = "Diana";
	count++;
}

int Account::getId() {
	return id;
}

string Account::getName() {
	return name;
}

int Account::getCount()
{
	return count;
}

Account::~Account()
{
}

