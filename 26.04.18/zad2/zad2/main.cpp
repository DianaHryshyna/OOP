#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

vector<Point> function(const vector<Point>& p, Point lg, Point pd) {
	vector<Point> vRes;
	for (int i = 0; i < p.size(); i++) {
		bool b1 = p[i].getX() >= lg.getX();
		bool b2 = p[i].getX() <= pd.getX();
		bool b3 = p[i].getY() <= lg.getY();
		bool b4 = p[i].getY() >= pd.getY();
		if (b1 && b2 && b3 && b4) {
			vRes.push_back(p[i]);
		}
	}
	return vRes;
}

int main() {
	vector<Point> vect;
	vect.push_back(Point(3.2, 6.7));
	vect.push_back(Point(4.5, 3.3));
	vect.push_back(Point(0.5, 0.9));
	vect.push_back(Point(1.1, 2.6));
	vect.push_back(Point(4, 2));

	vector<Point> result = function(vect, Point(3.0, 7.0), Point(5.0, 1.0));
	for (int i = 0; i < result.size(); i++) {
		cout << result[i].getX() << " " << result[i].getY() << endl;
	}
	system("pause");
	return 0;
}