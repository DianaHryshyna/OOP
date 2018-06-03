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

	class Iterator {
	public:
		Iterator(T* ptr1 = 0) : ptr(ptr1) {}
		T& operator*() {
			return *ptr;
		}
		T* operator->() {
			return ptr;
		}
		T* operator++() {
			return ++ptr;
		}
		
		bool operator==(const Iterator& other) const {
			return ptr == other.ptr;
		}
		bool operator!=(const Iterator& other) const {
			return !(*this == other);
		}
	private:
		T * ptr;
	};
	List* begin();
	List* end();

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

template<typename T>
List * List<T>::begin()
{
	return head;
}

template<typename T>
List * List<T>::end()
{
	return head+size;
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

	List<int>::Iterator it(lst.begin());
	cout << *(it++);
	cout << endl;
	system("pause");
	return 0;
}
