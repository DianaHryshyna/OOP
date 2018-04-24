#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class WordReplacer {
public:
	WordReplacer(string plik_place) {
		string word;
		ifstream fin(plik_place);
		int i = 0;
		while (!fin.is_open()) {
			wordArray = NULL;
			return;
		}
		while (fin >> word) {
			size++;
		}
		wordArray = new string[size];

		fin.seekg(0, ios_base::beg); //position to the begin of the file

		for (int i = 0; i < size; i++) {
			fin >> wordArray[i];
		}

		fin.close();
	}

	~WordReplacer() {
		delete[] wordArray;
	}

	unsigned int getSize() {
		return size;
	}

	void replace(unsigned int i, unsigned int j) {
		if (i > size || j > size || i == 0 || j == 0) {
			return;
		}
		//Ala ma kota i psa (i = 2, j = 4)
		string temp = wordArray[i - 1];
		wordArray[i - 1] = wordArray[j - 1];
		wordArray[j - 1] = temp;
	}

	string text() {
		string result;
		for (int i = 0; i < size; i++) {
			result += wordArray[i] + " ";
		}
		return result;
	}

private:
	string* wordArray;
	unsigned int size;
};
			
int main() {
	WordReplacer w("input.txt");
	cout << "Size: " << w.getSize() << endl;
	w.replace(2, 4);
	cout << w.text();
	system("pause");
	return 0;
}