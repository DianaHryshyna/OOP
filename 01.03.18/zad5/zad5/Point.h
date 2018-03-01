#pragma once
class Point
{
public:
	Point(float x, float y);
	Point(float x);
	float getX();
	float getY();
	float distance(Point p1, Point p2);

private:
	float x;
	float y;
};

