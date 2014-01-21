#ifndef LLELEMENT_HPP
#define LLELEMENT_HPP
// For those who would like an llelemnt which holds a C++ style string.
#include <string>

// Declare a template for the type T. The specific possible types may be found 
// in the implementation.
template <typename T>
class llelement
{
	public:
		// Constructor for a new llelement which takes values to 
		// initialize all members.
		llelement(T value, llelement* prevElem, llelement* nextElem);
		// The next llelement in the list.
		llelement* next;
		// The previous llelement in the list.
		llelement* prev;
		// The specific value for this element.
		// This value is of type T, where T is declared in the source.
		T value;
};
#endif

