#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	/*KLasa obiekt;
	cout << [](int a, int b)->int{return a+b;}(3,4) << endl;
	cout << [&obiekt](int a)->int {return obiekt.count(a); }(4) << endl;
	*/

	vector<int> vect = { 3, 2, 5 };

	int min = 3;
	int max = 5;

	replace_if(vect.begin(), vect.end(), [min, max](int x) {
		return !(x > min && x < max);
	}, 0);
	
	system("pause");
	return 0;
}