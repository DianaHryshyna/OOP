#include <iostream>

using namespace std;

struct Triangle {
	int a;
	int b;
	int c;
};

int perimeter(Triangle tria){
	return tria.a + tria.b + tria.c;
}

int main() {
	Triangle parametry = { 2, 2, 1 };
	int result = perimeter(parametry);
	cout << "The perimeter is " << result << "." << endl;
	system("pause");
	return 0;
}