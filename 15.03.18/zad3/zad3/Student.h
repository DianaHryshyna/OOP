#pragma once
#include "User.h"

class Student : public User
{
public:
	Student(int semestr, string login, string password);
	int getS();
private:
	int semestr;
};
