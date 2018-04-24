#pragma once
#include "Polygon.h"
class Image
{
public:
	Image(const Image& cpy);
	void addPolygon(Polygon p);
	~Image();
private:
	Polygon * pol;
	int count_polygon;

};

