#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
	float x;
	float y;
};

void sortPointVector(vector<Point> &v) {
	sort(v.begin(), v.end(), [](Point& p1, Point& p2)->bool {
		return p1.x < p2.x;
	});
}

int main() {
	vector<Point> vPoint;

	Point p1 = { 2, 3 };
	Point p2 = { 4 , 5 };
	Point p3 = { 1 , 8 };
	Point p4 = { 3, 1 };

	vPoint.push_back(p1);
	vPoint.push_back(p2);
	vPoint.push_back(p3);
	vPoint.push_back(p4);

	sortPointVector(vPoint);

	for (auto el : vPoint) {
		cout << el.x << endl;
	}

	system("pause");
	return 0;
}