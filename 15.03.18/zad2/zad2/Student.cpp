#include "Student.h"

Student::Student(int semestr) : User("lala", "123"), semestr(semestr) {
}

int Student::getS() {
	return semestr;
}