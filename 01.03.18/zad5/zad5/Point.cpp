#include "Point.h"
#include <cmath>

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

Point::Point(float x) {
	this->x = x;
	y = 0.0;
}

/*Point::Point(float a, float b = 0):x(a), y(b) {

}*/

float Point::getX() {
	return this->x;
}

float Point::getY() {
	return this->y;
}

float Point::distance(Point p1, Point p2) {
	return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
}