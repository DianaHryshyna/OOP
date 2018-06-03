#include <iostream>

using namespace std;

template <typename T>
class Array {
public:
	Array(int size);
	~Array();
	int size();
	T& operator[] (int index);

	template <typename T>
	class Iterator {
	public:
		Iterator(T* ptr1 = nullptr) 
			: ptr(ptr1) {
		}
		T& operator* () {
			return *ptr;
		}
		T* operator-> () {
			return ptr;
		}
		T* operator++ () {
			return ++ptr;
		}
		T* operator++ (int r) {
			return ++ptr;
		}
		T* operator-- () {
			return --ptr;
		}
		bool operator== (const Iterator& other) const {
			return (ptr == other.ptr);
		}
		bool operator!= (const Iterator& other) const {
			return !(*this == other);
		}
	private:
		T* ptr;
	};

	T* begin();
	T* end();

	
private:
	unsigned int m_size;
	T *arr;
};

template <typename T>
Array<T>::Array(int size) {
	this->m_size = size;
	this->arr = new T[size];
}

template <typename T>
Array<T>::~Array() {
	delete[] arr;
}

template <typename T>
int Array<T>::size() {
	return m_size;
}

template <typename T>
T& Array<T>::operator[](int index) {
	return arr[index];
}

template<typename T>
T* Array<T>::begin() {
	return arr;
}

template<typename T>
T* Array<T>::end() {
	return arr + size;
}

int main() {
	Array<int> tab(5);

	for (int i = 0; i < tab.size(); i++) {
		tab[i] = i + 2;
	}

	Array<int>::Iterator<int> it = tab.begin();
	cout << *(it++);

	cout << '\n';
	system("pause");
	return 0;
}