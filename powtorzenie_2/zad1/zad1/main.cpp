#include <iostream>
#include <list>
#include <map>
#include <iterator>

using namespace std;

/*template <typename T>
map<T, int> function(list<T> list) {
	map<T, int> myMap;
	int count = 1;
	list.sort();
	
	for (auto it = list.begin(); it != list.end(); it++) {
		while (*it == *next(it)) {
			count++;
			it++;
		}
		myMap.insert(pair<T, int>(*it, count));
		count = 1;
	}
	return myMap;
}*/

template <typename T>
map<T, int> function(list<T> list) {
	map <T,int> myMap;
	for (auto x : list) {
		if (myMap.find(x) == myMap.end()) {
			myMap.insert({ x, 1 });
		}
		else {
			myMap[x]++;
		}
	}
	return myMap;
}


int main() {
	list<char> myList;
	myList.push_back('c'); //a-2,c-3,d-1,g-1
	myList.push_back('a');
	myList.push_back('c');
	myList.push_back('c');
	myList.push_back('d');
	myList.push_back('g');
	myList.push_back('a');

	map<char, int> myMap = function<char>(myList);
	for (auto x : myMap) {
		cout << x.first << " " << x.second << endl;
	}

	system("pause");
	return 0;
}
