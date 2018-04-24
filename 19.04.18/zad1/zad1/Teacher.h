#pragma once
#include "Person.h"
class Teacher : public Person
{
public:
	Teacher(string title) : Person(name);
	~Teacher();
private:
	string title;
};

s