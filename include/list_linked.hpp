#ifndef LINKED_H
#define LINKED_H

#include "list.h"

template <typename T>
class LinkedList : public list<T>
{
	public:
	LinkedList() : list<T>() {}

	T front() {
	// TODO
	}

	T back() {
	// TODO
	}

	void push_front(T value) {
	// TODO
	}

	void push_back(T value) {
	// TODO
	}

	void pop_front() {
	// TODO
	}

	void pop_back() {
	// TODO
	}

	T operator[](int index) {
	// TODO
	}

	bool empty() {
	// TODO
	}

	int size() {
	// TODO
	}

	void clear() {
	// TODO
	}

	void sort() {
	// TODO
	}

	void reverse() {
	// TODO
	}

	std::string name()
	{
		return "Linked list";
	}

	// BidirectionalIterator<T> begin() {
	// // TODO
	// }

	// BidirectionalIterator<T> end() {
	// // TODO
	// }

	void merge(LinkedList<T> list) {
	// TODO
	}
};

#endif
