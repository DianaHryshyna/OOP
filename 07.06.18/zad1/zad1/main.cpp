#include <iostream>

using namespace std;

struct Point {
	int x;
	int y;
	friend istream & operator >> (istream & in_strm, Point & point);
};

istream & operator >> (istream & in_strm, Point & point) {
	in_strm >> point.x >> point.y;
	return in_strm;
}

int main() {
	Point p;
	cin >> p;
	cout << "x:" << p.x << " and y:" << p.y << endl;
	system("pause");
	return 0;
}
