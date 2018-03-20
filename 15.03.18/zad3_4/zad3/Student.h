#pragma once
#include "User.h"

class Student : public User
{
public:
	Student();
	Student(int semestr, string login, string password, string indeks);
	int getS();
	string getI();
protected:
	int semestr;
	string indeks;
};
