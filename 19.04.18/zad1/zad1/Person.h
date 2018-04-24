#pragma once
#include <string>

using namespace std;

class Person
{
public:
	Person(string name);
	~Person();
protected:
	string name;
};

