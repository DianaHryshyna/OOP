#include "Polygon.h"

using namespace std;

Polygon::Polygon() :MAX_SIZE(4), count(0)
{
	points = new Point[MAX_SIZE];
}

Polygon::Polygon(int x) : count(0)
{
	while (x % 4 != 0) {
		++x;
	}
	MAX_SIZE = x;
	points = new Point[MAX_SIZE];
}

Polygon::Polygon(const Polygon &cpy)
{
	this->count = cpy.count;
	this->MAX_SIZE = cpy.MAX_SIZE;
	this->points = new Point[this->MAX_SIZE];
	for (int i = 0; i < cpy.count; ++i) {
		this->points[i] = cpy.points[i];
	}
}


void Polygon::addPoint(Point p)
{
	if (MAX_SIZE == count) {
		MAX_SIZE += 4;
		Point* points_new = new Point[MAX_SIZE];
		for (int i = 0; i < count; ++i) {
			points_new[i] = points[i];
		}
		delete[] points;
		points = points_new;
	}
	points[count] = p;
	count++;
}

Point& Polygon::getPoint(int index)
{
	return points[index];
}

int Polygon::getCount() {
	return count;
}

Polygon::~Polygon()
{
	delete[] points;
}
