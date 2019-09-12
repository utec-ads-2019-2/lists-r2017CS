#ifndef LINKED_H
#define LINKED_H

#include "base_list.hpp"

namespace my
{
	template <typename T>
	class list : public base_list<T>
	{
		public:
			class node
			{
				T data;
				node* next;
	
				void kill_self();
			};
	
			list();
	
			std::string name() 										override;
			T 					back() 										override; 
			T 					front() 									override;
			bool 				empty() 									override;
			std::size_t size() 										override;
			void 				clear() 									override; 
			void 				pop_back() 								override; 
			void 				pop_front() 							override;
			void 				push_back(const T&) 			override; 
			void 				push_front(const T&) 			override;
			void 				reverse()									override; 
	
			void sort() 													override; 
			void merge(list<T>);
	
			T operator[] (const int& index) 			override;
	
			// BidirectionalIterator<T> begin()
			// {
			// 	// TODO
			// }
	
			// BidirectionalIterator<T> end()
			// {
			// 	// TODO
			// }
		private:
			node* head;
			node* tail;
	};
} // namespace my

#include "list.hppt"

#endif
