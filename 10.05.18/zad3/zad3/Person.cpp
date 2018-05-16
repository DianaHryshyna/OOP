#include "Person.h"



Person::Person(std::string name, int age) : name(name), age(age)
{
}

bool Person::operator < (Person child) {
	if (this->age <= child.age || this->age >= child.age) {
		return this->age < child.age;
	}
	else {
		return this->name < child.name;
	}
}

void Person::operator <<= (Person* child) {
	if (std::find(children.begin(), children.end(), child) == children.end()) {
		children.push_back(child);
	}
}

Person* Person::operator [](int index) {
	if (index > children.size()) {
		return 0;
	}
	else {
		return children[index];
	}
}

int Person::getNumberChildren()
{
	return children.size();
}

void Person::output() {
	for (int i = 0; i < children.size(); i++) {
		std::cout << "Name: " << children[i]->name << " " << "Age:" << children[i]->age << std::endl;
	}
}

void Person::output1(int index) {
	std::cout << children[index]->name << " " << children[index]->age;
}

void Person::sortChildren() {
	sort(children.begin(), children.end());
}

Person::~Person()
{
}
