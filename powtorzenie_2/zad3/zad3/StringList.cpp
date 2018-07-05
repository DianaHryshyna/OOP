#include "StringList.h"



StringList::StringList(const list<string>& myList)
{	
	this->myList = myList;
	currentPos.first = this->myList.begin();
	currentPos.second = 0;
}

void StringList::operator+(const string& napis)
{
	this->myList.push_back(napis);
}

void StringList::operator-(const string& napis)
{
	for (auto it = this->myList.begin(); it != myList.end(); it++) {
		if (*(it) == napis) {
			myList.erase(it);
			break;
		}
	}
}

ostream& operator << (ostream & os, StringList& obj) {
	if (obj.currentPos.first == obj.myList.end()) {
		obj.currentPos.first = obj.myList.begin();
		throw std::out_of_range("Out of range.");
	}

	string str = *(obj.currentPos.first);
	size_t pos = str.find(' ', obj.currentPos.second);

	if(pos == string::npos){
		pos = str.size();
	}

	os << str.substr(obj.currentPos.second, pos - obj.currentPos.second);
	obj.currentPos.second = pos + 1;
	if (obj.currentPos.second >= str.size()) {
		obj.currentPos.second = 0;
		obj.currentPos.first++;
	}

	return os;
}

//Ala ma kota, 1)pos = 3, currentPos = 0 ; currentPos.second = 4
//			   2)pos = 6, currentPos = 4; currentPos.second = 7
//			   3)pos = 11, currentPos = 0; 

StringList::~StringList()
{
}
