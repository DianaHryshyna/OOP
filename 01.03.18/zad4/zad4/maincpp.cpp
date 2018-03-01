#include <iostream>

using namespace std;

class Point {
private:
	float x;
	float y;
public:
	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}

	Point(float x) {
		this->x = x;
		y = 0.0;
	}

	float getX() {
		return this->x;
	}
	float getY() {
		return this->y;
	}
	float distance(Point p1, Point p2) {
		return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
	}
};

int main() {
	Point p = Point(2.0, 3.0);
	Point w = Point(2.0);
	cout << "The distance between two points is " << p.distance(p, w) << "." << endl;
	system("pause");
	return  0;
}