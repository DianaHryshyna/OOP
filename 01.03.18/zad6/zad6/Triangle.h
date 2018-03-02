#pragma once
#include "Point.h"

class Triangle
{
public:
	Triangle(Point p1, Point p2, Point  p3);
	float length(Point p1, Point p2);
	float perimeter(float a, float b, float c);
	float area(float a, float b, float c);
private:
	Point p1;
	Point p2;
	Point p3;
};

