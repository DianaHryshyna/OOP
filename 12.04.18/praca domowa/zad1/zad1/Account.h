#pragma once
#include <string>
using namespace std;

class Account
{
public:
	Account();
	int getId();
	string getName();
	static int getCount();
	~Account();
private:
	int id;
	string name;
	static int count;
};

