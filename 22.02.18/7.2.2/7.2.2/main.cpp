#include <iostream>

using namespace std;

struct Triangle {
	int a;
	int b;
	int c;
};

void assign(Triangle troj1, Triangle* troj2) {
	*troj2 = troj1;
}

int main() {
	Triangle parametry = { 1, 2, 3 };
	Triangle parametry1 = { 2, 3, 4 };
	assign(parametry, &parametry1);
	cout << parametry1.a << ends;
	cout << parametry1.b << ends;
	cout << parametry1.c << ends;
	system("pause");
	return 0;
}