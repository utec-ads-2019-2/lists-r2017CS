#ifndef LIST_H
#define LIST_H

#include  <iostream>

namespace my
{
	template <typename T>
	class base_list
	{
		public:
			base_list();
			~base_list();
	
			virtual T front() = 0;
			virtual T back() = 0;
			virtual void push_front(const T&) = 0;
			virtual void push_back(const T&) = 0;
			virtual void pop_front() = 0;
			virtual void pop_back() = 0;
			virtual T operator[](const int&) = 0;
			virtual bool empty() = 0;
			virtual std::size_t size() = 0;
			virtual void clear() = 0;
			virtual void sort() = 0;
			virtual void reverse() = 0;
			virtual void print() = 0;
			virtual std::string name() = 0;
	};
} // namespace my

#include "base_list.hppt"

#endif
