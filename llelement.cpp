#include "llelement.hpp"

/* 
This constructor takes the given elements and values and
The template must be declared before the implementation of the method
and the llelement must take a specific type T specified at compile time such as:
	llelement<int>* element = new llelement<int>(3.14, NULL, NULL);
*/
template <typename T>
llelement<T>::llelement(T value, llelement* prevElem, llelement* nextElem)
{
        this->prev = prevElem;
        this->next = nextElem;
	this->value = value;
}

// The following templates define what types can be held as the values in
// llelement objects. 
// These are the standard integer types both signed and unsigned.
template class llelement<int>;
template class llelement<short>;
template class llelement<long>;
template class llelement<unsigned int>;
template class llelement<unsigned short>;
template class llelement<unsigned long>;
// The following are the standard floating point types
template class llelement<float>;
template class llelement<double>;
// Booleans
template class llelement<bool>;
// String types
template class llelement<std::string>;
template class llelement<char*>;
// void pointers which may be cast as pointers to whatever object you need.
template class llelement<void*>;


