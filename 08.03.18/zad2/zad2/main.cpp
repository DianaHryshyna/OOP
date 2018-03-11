#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
	string s1, s2, s3;
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, s3);
	transform(s1.begin(), s1.end(), s1.begin(), tolower);
	string::iterator its2 = s2.begin();
	string::iterator itstemp1 = s1.begin();
	int i = 0;
	for (string::iterator its1 = s1.begin(); its1 != s1.end(); its1++) {
	    if (*its1 == *its2) {
			++its2;
		}
		else {
			itstemp1 = its1 + 1;
			its2 = s2.begin();
		}
	    if(its2 == s2.end()) {
			its2 = s2.begin();
			s1.replace(itstemp1, its1 + 1, s3);
		}
	}

	/*if (s1.find(s2) != string::npos) {
		s1.replace(s1.find(s2), s2.size(), s3);
		cout << s1;
	}
	else {
		cout << "s1 nie zawiera s2" << endl;
	}*/
	cout << "s1:" << s1;
	system("pause");
	return 0;
}