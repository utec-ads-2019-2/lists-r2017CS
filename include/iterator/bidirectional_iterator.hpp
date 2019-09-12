#ifndef BIDIRECTIONAL_ITERATOR_H
#define BIDIRECTIONAL_ITERATOR_H

#include "../iterator.h"

namespace my
{
	template <typename T> 
	class bidirectional_iterator : public base_iterator<T>
	{
		public:
		bidirectional_iterator() : base_iterator<T>() {};
		bidirectional_iterator(Node<T> *node) : base_iterator<T>(node) {};

		bidirectional_iterator<T> operator=(bidirectional_iterator<T> other) {
		// TODO
		}

		bool operator!=(bidirectional_iterator<T> other) {
		// TODO
		}

		bidirectional_iterator<T> operator++() {
		// TODO
		}

		bidirectional_iterator<T> operator--() {
		// TODO
		}

		T operator*() {
		// TODO
		}
	};
	
} // namespace my

#endif
