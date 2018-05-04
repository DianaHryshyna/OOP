#include "Point.h"



Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Point::getX() const {
	return x;
}

float Point::getY() const {
	return y;
}

Point::~Point()
{
}
