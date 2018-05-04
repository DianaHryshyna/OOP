#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> function(vector<int> vect1, vector<int> vect2) {
	
	vect1.insert(vect1.end(), vect2.begin(), vect2.end());

	sort(vect1.begin(), vect1.end());

	for (int i = 1; i < vect1.size(); ++i) {
		if (vect1[i] == vect1[i - 1]) {
			vect1.erase(vect1.begin() + i);
			--i;
		}
	}

	return vect1;
}

int main() {
	vector<int> vect1 = { 3, 5, 2 };
	vector<int> vect2 = { 3, 5, 4 };
	vector<int> result;
	result = function(vect1, vect2);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}
	system("pause");
	return 0;
}