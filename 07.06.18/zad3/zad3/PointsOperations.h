#pragma once
#include "Point.h"
class Points;

class PointsOperations
{
public:
	PointsOperations();
	static Point* closestToTheCenter(Points & points);
};

