#ifndef ITERATOR_H
#define ITERATOR_H

template <typename T, typename dependent_node>
class base_iterator
{
	protected:
		dependent_node *current;

	public:
		base_iterator() : current(nullptr) {};
		base_iterator(dependent_node *node) : current(node) {};
		virtual T operator*() = 0;
};

#endif
