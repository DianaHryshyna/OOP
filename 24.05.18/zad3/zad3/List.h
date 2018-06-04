#pragma once



template <class Type>
class List {
	
	template <class Type>
	class Node {
	public:
		Node(Type data = Type(), Node<Type>* pNext = nullptr)
			: data(data)
			, pNext(pNext) {
		}
	public:
		Type data;
		Node<Type>* pNext;
	};

public:

	List() 
		: pHead(nullptr)
		, size(0) {
	}

	~List() {
		// TODO
	}

	Type& operator[] (int index) {
		Node<Type>* pCurrent = pHead;
		int counter = 0;

		while (pCurrent != nullptr) {
			if (counter == index) {
				return pCurrent->data;
			} else {
				pCurrent = pCurrent->pNext;
				++counter;
			}
		}
	}

	void push_back(Type data) {
		if (pHead == nullptr) {
			pHead = new Node<Type>(data);
		} else {
			Node<Type>* pCurrent = pHead;
			while (pCurrent->pNext != nullptr) {
				pCurrent = pCurrent->pNext;
			}
			pCurrent->pNext = new Node<Type>(data);
		}
		++size;
	}

	int getSize() const {
		return size;
	}

	Node<Type>* begin() {
		return pHead;
	}

	Node<Type>* end() {
		return nullptr;
	}

	template <class Type>
	class Iterator {
	public:
		Iterator(Node<Type>* ptr = nullptr)
			: ptr(ptr) {
		}
		Type& operator* () {
			return ptr->data;
		}
		Node<Type>* operator++ () {
			ptr = ptr->pNext;
			return ptr;
		}
		bool operator== (const Iterator& other) const {
			return (ptr == other.ptr);
		}
		bool operator!= (const Iterator& other) const {
			return !(*this == other);
		}
	private:
		Node<Type>* ptr;
	};


private:
	Node<Type>* pHead;
	int size;
};
