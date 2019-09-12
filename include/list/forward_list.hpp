#ifndef FORWARD_H
#define FORWARD_H

#include "base_list.hpp"

namespace my
{
	template <typename T>
	class forward_list : public base_list<T>
	{
		public:
			static const std::string ex_forward_list_empty;

			class node
			{
				public:
					node();
					~node();

					void kill_self();
					T data;
					node* next;
			};

			class forward_iterator
			{
				public:
					forward_iterator();
					forward_iterator(node);

					forward_iterator	operator=		(forward_iterator);
					bool							operator!=	(forward_iterator);
					forward_iterator	operator++	();
					T 								operator*		();
			};
	
			forward_list();
			~forward_list();
	
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
			void 				print()										override; 
	
			void sort() 													override; 
			void merge(forward_list<T>);
	
			T operator[] (const int& index) 			override;
	
			forward_iterator begin();
			forward_iterator end();

		private:
			node* head;
			node* tail;
	};

	template <typename T>
	const std::string forward_list<T>::ex_forward_list_empty = "forward_list is empty, please consider to insert some elements before calling this function.";

} // namespace my



#include "forward_list.hppt"

#endif
