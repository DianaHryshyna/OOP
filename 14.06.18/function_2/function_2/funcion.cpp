#include <iostream>
#include <functional>
#include <vector>

using namespace std;

void Foo(int a) {
	if (a > 10 && a < 55) {
		cout << "FOO " << a << endl;
	}
}

void Bar(int a) {
	if (a % 2 == 0) {
		cout << "Bar " << a << endl;
	}
}

void DoWork(vector<int>& vc, vector<function<void(int)>> funVector) { //vector of the references on functions 
	for (auto el : vc) {
		for (auto &fel : funVector) {
			fel(el);
		}
	}
}

int main() {
	vector<int> v = { 3, 4, 5, 6, 7, 8, 9, 10, 43, 56 };
	vector<function<void(int)>> funVector;
	funVector.emplace_back(Foo);
	funVector.emplace_back(Bar);

	DoWork(v, funVector);

	system("pause");
	return 0;
}