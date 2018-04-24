#include <iostream>
#include "Polygon.h"
using namespace std;

int main() {
	Polygon obj;
	Polygon obj2(obj);
	Point p = { 1, 1 };
	obj2.addPoint(p);
	obj2.addPoint({ 3, 2 });
	for (int i = 0; i < obj2.getCount(); ++i) {
		cout << obj2.getPoint(i).x << " " << obj2.getPoint(i).y << endl;
	}
	system("pause");
	return 0;
}