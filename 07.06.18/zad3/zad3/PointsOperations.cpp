#include "PointsOperations.h"
#include "Points.h"


PointsOperations::PointsOperations()
{
}

Point* PointsOperations::closestToTheCenter(Points & points)
{
	double x_c = 0;
	double y_c = 0;
	int x = 0;
	int y = 0;

	for (int i = 0; i < points.size; i++) {
		x += points.arr[i].x;
		y += points.arr[i].y;
	}

	x_c = x / points.size;
	y_c = y / points.size;

	Point p_center = { x_c, y_c };

	return &p_center;
}

/*class A
{…
  int func();
};
class B
{…
  friend int A :: func();
};*/