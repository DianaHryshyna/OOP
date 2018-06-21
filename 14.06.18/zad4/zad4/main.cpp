#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
	float x;
	float y;
};

void sortPointVector(vector<Point> &v, const Point &p) {
	sort(v.begin(), v.end(), [p](Point p1, Point p2)->bool {
		return sqrt(pow((p.x - p1.x), 2) + pow((p.y - p1.y), 2)) < sqrt(pow((p.x - p2.x), 2) + pow((p.y - p2.y), 2));
	});
}

int main() {
	vector<Point> vPoint;

	Point p1 = { 2, 3 };
	Point p2 = { 4 , 5 };
	Point p3 = { 1 , 8 };
	Point p4 = { 3, 5 };

	vPoint.push_back(p1);
	vPoint.push_back(p2);
	vPoint.push_back(p3);


	sortPointVector(vPoint, p4);

	for (auto el : vPoint) {
		cout << el.x << endl;
	}

	system("pause");
	return 0;
}