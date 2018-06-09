#pragma once
#include <iostream>

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
	~Points();
private:
	Point * arr;
	int size;
};

