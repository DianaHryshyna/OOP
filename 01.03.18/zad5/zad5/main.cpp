#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

int main() {
	Point p = Point(2.0, 3.0);
	Point w = Point(2.0);
	cout << "The distance between two points is " << p.distance(p, w) << "." << endl;
	system("pause");
	return  0;
	}