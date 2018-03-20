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

