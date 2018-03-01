#include <iostream>

using namespace std;

class Point {
private:
	float x;
	float y;
public:
	void set(float x, float y) {
		this->x = x;
		this->y = y;
	}
	float getX() {
		return this->x;
	}
	float getY() {
		return this->y;
	}
	void move(float x, float y) {
		this->x += x;
		this->y += y;
	}
};

int main() {
	Point p;
	p.set(10.0, 6.0);
	p.move(5.0, 3.2);
	cout << "(" << p.getX() << ", " << p.getY() << ") ";
	system("pause");
	return  0;
}