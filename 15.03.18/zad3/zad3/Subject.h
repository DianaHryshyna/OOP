#pragma once
#include "Student.h"
#include <string>

class Subject
{
public:
	Subject(string name, int maxStud);
	bool addStudent(Student* stud);
	(string index, bool &flag);
private:
	string name;
	int maxStud;
	int currentStud;
	Student* students[100];
};

