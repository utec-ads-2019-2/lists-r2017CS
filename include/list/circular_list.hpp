#ifndef CIRCULAR_H
#define CIRCULAR_H

#include "base.hpp"

namespace my
{
	template <typename T>
	class circular_linked_list : public list<T>
	{
		public:
			class node
			{
				T data;
				node* next;
	
				void kill_self();
			};
	
			circular_linked_list();
	
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
			void merge(circular_linked_list<T>);
	
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

#include "circular.hppt"

#endif
