#include "Triangle.h"
#include "Point.h"
#include <cmath>

Triangle::Triangle(Point p1, Point p2, Point p3){
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
}

float Triangle::length(Point p1, Point p2) {
	return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
}

float Triangle::perimeter(float a, float b, float c) {
	return a + b + c;
}

float Triangle::area(float a, float b, float c) {
	float p = (a + b + c) / 2.0;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}


