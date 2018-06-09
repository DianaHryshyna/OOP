#include <iostream>
#include "Points.h"

using namespace std;

int main() {
	Points p(5);
	cout << p;

	cout << "Wpisz indeks ";
	int index;
	cin >> index;

	cout << "Punkt o indeksie:" << index << endl;
	cout << "x:" << p[index].x << " y:" << p[index].y << endl;

	system("pause");
	return 0;
}