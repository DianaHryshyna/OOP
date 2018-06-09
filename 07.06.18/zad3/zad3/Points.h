#pragma once
#include <iostream>

using namespace std;

struct Point {
	int x;
	int y;
};

class PointsOperations;

class Points
{
public:
	friend ostream & operator<<(ostream &output, const Points &DateArray);
	Points(int size);
	~Points();
private:
	friend PointsOperations;
	//friend Point* PointsOperations::closestToTheCenter(Points & points);
	Point * arr;
	int size;
};

