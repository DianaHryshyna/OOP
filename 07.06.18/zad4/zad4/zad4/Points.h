#pragma once
#include <iostream>
#include <stdexcept>

using namespace std;

struct Point {
	int x;
	int y;
};

class Points
{
public:
	friend ostream & operator<<(ostream &output, const Points &DateArray);
	Points(int size);
	Point operator[](int index);
	~Points();
private:
	Point * arr;
	int size;
};

