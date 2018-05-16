#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class Person
{
public:
	Person(std::string name, int age);
	bool operator < (Person child);
	void operator <<= (Person* child);
	Person* operator [](int index);
	int getNumberChildren();
	void sortChildren();
	void output();
	void output1(int index);
	~Person();
private:
	std::string name;
	int age;
	std::vector<Person*> children;
};
