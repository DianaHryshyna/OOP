#pragma once
#include "Points.h"
class PointsOperations
{
public:
	PointsOperations();
	static Point* closestToTheCenter(Points & points);
};

