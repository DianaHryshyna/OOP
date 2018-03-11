#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main() {
	string file;
	cin >> file;

	ifstream fin(file);

	stringstream buffer;
	buffer << fin.rdbuf();
	string text = buffer.str();

	string str = "ala";

	int counter = 0;
	size_t x = 0;
	while (text.find(str, x) != string::npos) {
		x = text.find(str, x) + str.size();
		++counter;
	}
	cout << counter << endl;
	system("pause");
	return 0;
}