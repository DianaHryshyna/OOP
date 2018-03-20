#include <iostream>
#include <string>
#include "Subject.h"

int main() {
	bool flag;
	Student s(5, "login", "password", "12345"), 
			s1(3, "l", "p", "25678"), 
			s2(4, "s", "z", "123456"), 
			s3(5, "k", "z", "1234567");
	Subject sub("math", 3);
	cout << (sub.addStudent(&s) ? "Jestes zapisany do tego przedmiotu." : "Nie ma miejsc.") << " " << (s.authorize("login", "password") ? "Ok" : "Sproboj ponownie") << endl;
	cout << (sub.addStudent(&s1) ? "Jestes zapisany do tego przedmiotu." : "Nie ma miejsc.") << " " << (s1.authorize("p", "k") ? "Ok" : "Sproboj ponownie") << endl;
	cout << (sub.addStudent(&s2) ? "Jestes zapisany do tego przedmiotu." : "Nie ma miejsc.") << " " << (s2.authorize("l", "m") ? "Ok" : "Sproboj ponownie") << endl;
	cout << (sub.addStudent(&s3) ? "Jestes zapisany do tego przedmiotu." : "Nie ma miejsc.") << endl;
	
	cout << sub.change("12345", flag).getI() << " " << flag << " " << sub.change("12345", flag).authorize("login", "password");
	system("pause");
	return 0;
}