#pragma once
#include <list>
#include <string>
#include <iostream>

using namespace std; 

class StringList
{
public:
	StringList(const list<string>& myList);
	void operator +(const string& napis);
	void operator -(const string& napis);
	friend ostream& operator << (ostream & os, StringList& obj);
	~StringList();
private:
	list<string> myList;
	pair<list<string>::iterator, int> currentPos;
};

