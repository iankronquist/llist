#ifndef LLIST_HPP
#define LLIST_HPP
// llelements are individual elements in the list.
#include "llelement.hpp"
// This exception is thrown when an invalid index outside the range of
// the llist is provided.
#include "IndexOutsideOfRangeException.hpp"
// This exception is thrown when the number of elements exceeds INT_MAX
#include "MaximumLengthExceededException.hpp"
#include <climits>

// An implementation of a linked list designed as a reusable component for 
// future programs.
template <typename T>
class llist
{
	private:
		// A pointer to the first element of the list.
		llelement<T>* head;
		// A pointer to the last element of the list so it may be 
		// traversed backwards.
		llelement<T>* tail;
		// The length of the list.
		int length;

	public:
		// A simple constructor which makes an empty list.
		llist();
		// A constructor which takes elements of an array and builds
		// a list with their values.
		llist(T* array, int length);
		// A simple destructor - destroys all constituent llelements.
		~llist();
		// Append the value of type T to the end of the list.
		void append(T value);
		// Return the index of the first occurrence of the provided
		// value.
		int firstIndexOf(T value);
		// Return the index of the last occurence of the provided
		// value.
		int lastIndexOf(T value);
		// Returns the value of the first element of the list.
		T first();
		// Returns the value of the last element of the list.
		T last();
		// Returns the value of the index-th positioned llelement
		// in the list.
		T at(int index);
		// Assigns the provided value to the index-th positioned 
		// llelement in the list.
		void at(int index, T value);
		// Removes the last (tail) element of the list.
		void pop();
		// Removes the index-th element of the list.
		void pop(int index);
		// Returns the number of elements.
		int numberOfElements();
};
#endif
