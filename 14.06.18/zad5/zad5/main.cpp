#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[15];
	int max = 0;

	for (int i = 0; i < 15; i++) {
		arr[i] = rand() % 15;
	}

	cout << "Array: " << endl;
	for (int i : arr) {
		cout << i << endl;
	}

	for_each(arr, arr + 15, [&max](int x)->void {
		if(x > max){
			max = x;
		}
	});

	cout << "Max: " << max << endl;

	system("pause");
	return 0;
}
