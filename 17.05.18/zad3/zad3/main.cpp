#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using namespace std;

template <class Container, typename Type>
Type& searchMin(Container& vect) {
	auto min_iter = vect.begin();
	for (auto iter = vect.begin(); iter != vect.end(); ++iter) {
		if (*iter < *min_iter) {
			min_iter = iter;
		}
	}
	return *min_iter;
}

int main() {
	vector<int> vec = { 4, 7, 3, 3 };

	int& min = searchMin<vector<int>, int>(vec);

	cout << min;
	system("pause");
	return 0;
}