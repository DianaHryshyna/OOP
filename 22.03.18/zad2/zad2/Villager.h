#pragma once
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Villager
{
public:
	Villager(string name, unsigned int age, unsigned int m_age, bool sex);
	Villager();
	Villager(Villager& villager);
	unsigned int& getAge();
	void setAge(unsigned int age);
	void advance();
	bool isMale();
	string getName();
	~Villager();
protected:
	string* name;
	string m_name[3] = { "Adrian", "Paweł", "Józef" };
	string f_name[3] = { "Krystyna", "Ola", "Ania" };
	unsigned int age;
	unsigned int m_age;
	bool sex; // true - M, false - F

};