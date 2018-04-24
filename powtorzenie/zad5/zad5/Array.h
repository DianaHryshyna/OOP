#pragma once
using namespace std;
class Array
{
public:
	Array(unsigned int size);
	bool index_ok(unsigned int index);
	void cpy(const Array &cpy);
	unsigned getSize();
	unsigned int& at(unsigned int index);
	~Array();
private:
	unsigned int* arr;
	unsigned int size;
	

};

