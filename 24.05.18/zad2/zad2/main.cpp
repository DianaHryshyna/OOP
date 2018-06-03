#include <iostream>

using namespace std;

template <typename T>
class List {
private:
	template<typename T>
	class Node {
	public:
		Node * pNext;
		T data;
		Node(T data = T(), Node *pNext = nullptr) {
			this->data = data;
			this->pNext = pNext;
		}
	};
	Node<T> *head;
	int size;
public:
	List();
	~List();

	int getSize();
	void push_back(T data);
	T& operator[](int index);

 };

template<typename T>
List<T>::List() 
	: size(0)
	, head(nullptr) {
}


template<typename T>
List<T>::~List() {
}

template<typename T>
int List<T>::getSize()
{
	return size;
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr) {
		head = new Node<T>(data);
	}
	else {
		Node<T>* current = this->head;
		while (current->pNext != nullptr) {
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	size++;
}

template<typename T>
T & List<T>::operator[](int index)
{
	Node<T>* current = this->head;
	int counter = 0;
	while (current != nullptr) {
		if (counter == index) {
			return current->data;
		}
		else {
			current = current->pNext;
			counter++;
		}
	}
}



int main() {

	List<int> lst;

	/*lst.push_back(5);
	lst.push_back(10);
	lst.push_back(15);*/

	int numberCount;
	cin >> numberCount;

	for (int i = 0; i < numberCount; i++) {
		lst.push_back(rand() % 10);
	}

	//cout << lst[2] << endl;
	cout << lst.getSize() << endl;

	for (int i = 0; i < lst.getSize(); i++) {
		cout << lst[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
