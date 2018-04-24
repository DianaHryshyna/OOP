#include "Array.h"


Array::Array(unsigned int size)
{
	this->size = size;
	arr = new unsigned int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = i;
	}
}


Array::~Array()
{
	delete[] arr;
}

void Array::cpy(const Array &cpy)
{
	this->size = cpy.size;
	this->arr = new unsigned int[this->size];
	for (int i = 0; i < size; i++) {
		this->arr[i] = cpy.arr[i];
	}
}

unsigned int Array::getSize() {
	return size;
}

unsigned int& Array::at(unsigned int index)
{
	if (index > size) {
		return ;
	}
	else {
		return arr[index];
	}
}

bool Array::index_ok(unsigned int index)
{
	bool flag = true;
	if (index > size) {
		flag = false;
	}
	return flag;
}
