#pragma once
#include "User.h"

class Student : public User
{
public:
	Student(int semestr);
	int getS();
private:
	int semestr;
};

