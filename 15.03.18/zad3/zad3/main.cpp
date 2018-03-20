#include <iostream>
#include <string>
#include "Subject.h"

int main() {
	Student s(5, "login", "password"), s1(3, "l", "p"), s2(4, "s", "z"), s3(5, "k", "z");
	Subject sub("math", 3);
	cout << (sub.addStudent(&s) ? "Jestes zapisany do tego przedmiotu." : "Nie ma miejsc.") << " " << (s.authorize("login", "password") ? "Ok" : "Sproboj ponownie") << endl;
	cout << (sub.addStudent(&s1) ? "Jestes zapisany do tego przedmiotu." : "Nie ma miejsc.") << " " << (s1.authorize("p", "k") ? "Ok" : "Sproboj ponownie") << endl;
	cout << (sub.addStudent(&s2) ? "Jestes zapisany do tego przedmiotu." : "Nie ma miejsc.") << " " << (s2.authorize("l", "m") ? "Ok" : "Sproboj ponownie") << endl;
	cout << (sub.addStudent(&s3) ? "Jestes zapisany do tego przedmiotu." : "Nie ma miejsc.") << endl;
	system("pause");
	return 0;
}