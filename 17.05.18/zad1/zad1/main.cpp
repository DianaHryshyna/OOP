#include <iostream>
#include <iterator>

using namespace std;

template <typename Typ>
Typ* searchMin(Typ* tab_begin, Typ* tab_end) {
	Typ* min = tab_begin;
	for (auto it = tab_begin + 1; it!=tab_end; it++) {
		if(*min > *it){
			min = it;
		}
	}
	return min;
}

int main() {
	int tab[3];
	for (int i = 0; i < 3; i++) {
		tab[i]= i;
	}

	int* min = searchMin<int>(tab, (tab+2));
	
	cout << min;
	system("pause");
	return 0;
}