#pragma once
class Point
{
public:
	Point(float x, float y);
	float getX() const;
	float getY() const;
	~Point();
private:
	float x;
	float y;
};

