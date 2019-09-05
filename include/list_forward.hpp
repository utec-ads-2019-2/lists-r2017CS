#ifndef FORWARD_H
#define FORWARD_H

#include "list.h"

template <typename T>
class ForwardList : public list<T>
{
    public:
        ForwardList() : list<T>() {}

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

        std::string name() {
            return "Forward list";
        }

        // ForwardIterator<T> begin() {
        //     // TODO
        // }

				// ForwardIterator<T> end() {
        //     // TODO
        // }

        void merge(ForwardList<T> list) {
            // TODO
        }
};

#endif
