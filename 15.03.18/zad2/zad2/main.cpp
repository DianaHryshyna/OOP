#include <iostream>
#include "User.h"
#include "Student.h"

using namespace std;
int main() {
	Student s = Student(2);
	cout << "semestr: " << s.getS() << endl;
	if (s.authorize("lala", "123")) {
		cout << "Ok!" << endl;
	} 
	else {
		cout << "Sproboj ponownie" << endl;
	}
	system("pause");
	return 0;
}