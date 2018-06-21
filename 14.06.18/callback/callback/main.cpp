#include <iostream>

using namespace std;

class Callee {
private:
	int i;
public:
	Callee(int i) {
		this->i = i;
	}
	int callbackFunction(int i) {
		cout << "Callee input " << endl;
		return this->i*i
	}
};
int main() {


	system("pause");
	return 0;
}