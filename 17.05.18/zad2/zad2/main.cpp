#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

template <typename Typ>
Typ* searchMin(Typ* tab_begin, Typ* tab_end) {
	Typ* min = tab_begin;
	for (auto it = tab_begin + 1; it != tab_end; it++) {
		if (*min > *it) {
			min = it;
		}
	}
	return min;
}

char tolower_symb(char character) {
	if (character > 'A' && character < 'Z') {
		return character + 32;
	}
	else
		return character;
}

template<>
string* searchMin(string* tab_begin, string* tab_end) {

	for (auto iter = tab_begin; iter != tab_end; iter++) {
		std::for_each(iter->begin(), iter->end(), tolower_symb);
	}

	string* min = tab_begin;
	for (auto it = tab_begin + 1; it != tab_end; it++) {
		if (*min > *it) {
			min = it;
		}
	}
	return min;
}



int main() {

	string tab[3];
	tab[0] = "ALa";
	tab[1] = "Ma";
	tab[2] = "kota";

	string* min = searchMin<string>(tab, (tab + 3));
	cout << *min;
	system("pause");
	return 0;
}