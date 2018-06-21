#pragma once
#include <iostream>
#include "PointsOperations.h"
using namespace std;

//class PointsOperations;

class Points
{
public:
	friend ostream & operator<<(ostream &output, const Points &DateArray);
	Points(int size);
	~Points();
private:
	//friend PointsOperations;
	friend Point * PointsOperations::closestToTheCenter(Points & points);
	Point * arr;
	int size;
};

