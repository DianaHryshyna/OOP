#include "Student.h"

Student::Student(){
}

Student::Student(int semestr, string login, string password, string indeks) 
	: User(login, password)
	, semestr(semestr), indeks(indeks) {
}

int Student::getS() {
	return semestr;
}

string Student::getI() {
	return indeks;
}