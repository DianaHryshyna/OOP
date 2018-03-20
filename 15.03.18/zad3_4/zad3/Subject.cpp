#include "Subject.h"


Subject::Subject(string name, int maxStud) 
	: name(name)
	, maxStud(maxStud){
	currentStud = 0;
}

bool Subject::addStudent(Student* stud) {
	if (currentStud < maxStud) {
		students[currentStud] = stud;
		currentStud++;
		return true;
	}
	else
		return false;
}

Student& Subject::change(string indeks, bool& flag) {
	for(int i = 0; i < maxStud; ++i){
		if (students[i]->getI() == indeks) {
			flag = true;
			return *(students[i]);
		}
	}
	flag = false;
	Student s;
	return s;
}
