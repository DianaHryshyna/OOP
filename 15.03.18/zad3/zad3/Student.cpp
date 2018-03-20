#include "Student.h"

Student::Student(int semestr, string login, string password) 
	: User(login, password)
	, semestr(semestr) {
}

int Student::getS() {
	return semestr;
}