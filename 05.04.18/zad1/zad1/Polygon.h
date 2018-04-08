#pragma once

struct Point {
	float x;
	float y;
};

class Polygon
{
public:
	Polygon();
	Polygon(int x);
	Polygon(const Polygon& cpy);
	void addPoint(Point p);
	~Polygon();
	Point& getPoint(int index);
	int getCount();
private:
	Point* points;
	int count;
    int MAX_SIZE;
};

