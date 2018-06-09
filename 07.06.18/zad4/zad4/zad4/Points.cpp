#include "Points.h"

Points::Points(int size) : size(size)
{
	arr = new Point[size];
	for (int i = 0; i < size; i++) {
		arr[i].x = i;
		arr[i].y = i * 2;
	}
}

Point Points::operator[](int index)
{
	try {
		if (index >= size) {
			throw std::out_of_range("Out of range error \n");
		}
		return arr[index];
	}
	catch (std::out_of_range outofrange){
		std::cout << outofrange.what();
	}
	
	
}

Points::~Points()
{
	delete[]arr;
}

ostream & operator<<(ostream & output, const Points & DateArray)
{
	for (int i = 0; i < DateArray.size; i++) {
		output << "x:" << DateArray.arr[i].x << " y:" << DateArray.arr[i].y << endl;
	}
	return output;
}