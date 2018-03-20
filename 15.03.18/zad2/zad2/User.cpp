#include "User.h"

User::User() {
}

User::User(string login0, string password0)
	: login(login0)
	, password(password0) {
}

bool User::authorize(string login, string password) {
	if (this->login == login && this->password == password) {
		return true;
	}
	else
		return false;
}
