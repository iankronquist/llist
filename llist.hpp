#ifndef LLIST_HPP
#define LLIST_HPP
#include <stdlib.h>
#include "llelement.hpp"

class llist
{
	private:
		template <typename T>
		llelement* head;
		llelement* tail;
		T length;

	public:
		llist();
		llist(T* array, T length);
		~llist();
		void append(T value);
		int firstIndexOf(T value);
		int lastIndexOf(T value);
		T head();
		T tail();
		T at(int index);
		//operator[](int index);
		void at(int index, T value);
		void pop();
		void pop(int index);
};
#endif
