#pragma once
#include <string>

using namespace std;
class User
{
public:
	User();
	User(string, string);
	bool authorize(string, string);
private:
	string login;
	string password;
};

