#include "Villager.h"
#include <iostream>



Villager::Villager(string name, unsigned int age, unsigned int m_age, bool sex)
{
	this->name = new string;
	*(this->name) = name;
	//this->name = name;
	this->age = age;
	this->m_age = m_age;
	this->sex = sex;
}

Villager::Villager() {
	this->name = new string;
	srand(unsigned(time(nullptr)));
	sex = rand() % 2;
	m_age = rand() % 100 + 1;
	age = rand() % m_age;
	if (sex == true) {
		*name = m_name[rand() % 3];
	}
	else {
		*name = f_name[rand() % 3];
	}
	cout << "Osoba o imieniu " << *name << ", ktora ma " << age << " lat, dozyje do " << m_age << endl;
	if (sex == 1) {
		cout << "mezczyzna" << endl;
	}
	else {
		cout << "kobieta" << endl;
	}
}

Villager::Villager(Villager& villager) {
	this->name = new string;
	*this->name = villager.getName();
}

void Villager::advance() {
	age++;
	if (age == m_age) {
		delete this;
	}
}

string Villager::getName() {
	return *name;
}

Villager::~Villager() {
	cout << "Umiera " << *name << " " << age << endl;
	delete this->name;
}
