#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s = "Ala ma kota";
	transform(s.begin(), s.end(), s.begin(), tolower);
    char min = 'z';
	char max = 'a';
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			if (s[i] > max) {
				max = s[i];
			}
			if (s[i] < min) {
				min = s[i];
			}
		}
	}
	cout << "Najwczesniejsza litera: " << min << endl;
	cout << "Najpozniejsza litera: " << max << endl;
	system("pause");
	return 0;
}