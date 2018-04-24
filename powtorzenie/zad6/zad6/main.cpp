#include <iostream>

using namespace std;
 
class Stworek {
public:
	virtual void powiedz(string &) = 0;
};

class StworekJakajacy : public Stworek{
public:
	void powiedz(string &s) override {
		char* arr = new char[s.length()];
		for (int i = 0; i < s.length(); i++) {
			arr[i] = (char)s[i];
		}
		for (int i = 0; i < s.length(); i++) {
			if (i == 0) {
				cout << arr[0] << arr[0] << arr[0];
			}
			else {
				cout << arr[i];
			}
		}
	}
};

class StworekBezR : public Stworek{
public:
	void powiedz(string &s) override {
		/*char* arr = new char[s.size()];
		for (int i = 0; i < s.size(); i++) {
			arr[i] = (char)s[i];
		}*/
		for (string::iterator it = s.begin(); it != s.end(); it++) {
			if (*it == 'r') {
				cout << 1;
			}
			else {
				cout << *it;
			}
		}
	}
};

int main() {
	string napis("ala ma r kota");
	Stworek* st1 = new StworekJakajacy();
	Stworek* st2 = new StworekBezR();

	st1->powiedz(napis);
	cout << st1;
	system("pause");
	return 0;
}