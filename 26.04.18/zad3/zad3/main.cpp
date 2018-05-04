#include <iostream>
#include <iterator>
#include <list>
#include <string>

using namespace std;

void function(list<string> ::iterator it1, list<string> ::iterator it2) {
	//copy(it1, it2, ostream_iterator<string>(cout, " "));
	for (auto iter = it1; iter != it2; ++iter) {
		cout << *iter;
	}
}

int main() {
	list<string> myList;
	

	for (int i = 0; i < 5; i++) {
		myList.push_back("The first");
	}
	cout << "1.List:" << endl;
	copy(myList.begin(), myList.end(), ostream_iterator<string>(cout, " "));
	cout << "2.List:" << endl;
	list<string> ::iterator it1 = myList.begin();
	list<string> ::iterator it2 = myList.end();

	advance(it1, 1);
	advance(it2, -1);
	function(it1, it2);
	system("pause");
	return 0;
}