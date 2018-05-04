#pragma once
class Point
{
public:
	Point(float x, float y);
	float getX();
	float getY();
	~Point();
private:
	float x;
	float y;
};

