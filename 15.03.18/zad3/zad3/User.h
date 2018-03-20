#pragma once
#include <string>

using namespace std;
class User
{
public:
	User();
	User(string, string);
	bool authorize(string, string);
protected:
	string login;
	string password;
};

