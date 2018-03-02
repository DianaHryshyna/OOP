#include <iostream>
#include <cmath>
#include "Point.h"
#include "Triangle.h"

using namespace std;

int main() {
	Point p1 = Point(0.0, 0.0);
	Point p2 = Point(3.0, 0.0);
	Point p3 = Point(0.0, 4.0);
	Triangle obj(p1, p2, p3);
	float a = obj.length(p1, p2);
	float b = obj.length(p2, p3);
	float c = obj.length(p3, p1);
	cout << "Perimeter is: " << obj.perimeter(a, b, c) << endl;
	cout << "Area is: " << obj.area(a, b, c) << endl;

	system("pause");
	return 0;
}