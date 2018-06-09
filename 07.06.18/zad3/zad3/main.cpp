#include <iostream>
#include "PointsOperations.h"
#include "Points.h"

using namespace std;

int main() {
	Points points(5);
	Point* p_center = PointsOperations::closestToTheCenter(points);
	
	cout << "x:" << p_center->x << " y:" << p_center->y << endl;
	system("pause");
	return 0;
}