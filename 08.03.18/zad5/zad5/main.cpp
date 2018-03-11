#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	fstream file("text.txt");
	stringstream ss;
	string line;
	int val, sum;
	char op;
	while (getline(file, line)) {
        sum = 0;
		ss.clear();
		ss.str(line);
		ss >> op;
		while (1) {
			if ((ss >> val)) {
				if (op == '+') sum += val;
				else sum -= val;
				ss >> op;
			}
			else break;

		}
		cout << sum << endl;
	}
	return 0;
}
