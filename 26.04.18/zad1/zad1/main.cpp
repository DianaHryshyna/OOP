#include <iostream>
#include <vector>
#include <algorithm>
#include "Point.h"

using namespace std;


bool sortX(Point p, Point p2) {
	return p.getX() < p2.getX();
}

bool sortY(Point p, Point p2) {
	return p.getY() < p2.getY();
}

vector<Point> v;

int main(){
	Point p(5, 6);
	Point p2(3, 4);
	v.push_back(p);
	v.push_back(p2);
	sort(v.begin(), v.end(), sortX);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].getX() << endl;
	}
	system("pause");
	return 0;
}