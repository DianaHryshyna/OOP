#include <iostream>
#include <functional>
#include <vector>

using namespace std;

void Foo(int a) {
	if (a > 10 && a < 55) {
		cout << a << endl;
	}
}

void Bar(int a) {
	if (a % 2 == 0) {
		cout << a << endl;
	}
}

/*void DoWork(vector<int>& vc) { //trzeba dwie funkcji pisac, dla Foo i dla Bar;
	for (auto el : vc) {         //mozna to zamienic ponizszym kodem
		Foo(el);
	}
}

void DoWork(vector<int>& vc) {
	for (auto el : vc) {
		Bar(el);
	}
}*/

void DoWork(vector<int>& vc, function<void(int)> f) { //objiekt typu function bedzie mial reference na funkcje
	for (auto el : vc) {
		f(el);
	}
}

int main() {
	vector<int> v = { 3, 4, 5, 6, 7, 8, 9, 10, 43, 56};
	DoWork(v, Foo);
	system("pause");
	return 0;
}