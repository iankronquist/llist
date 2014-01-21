#include "llist.hpp"
#include <stdio.h> //for debugging
#include <cassert>


template <typename T>
llist<T>::llist()
{
	this->head = NULL;//llelementCreate(0, NULL, NULL);
	this->tail = NULL;
	this->length = 0;
}

template <typename T>
llist<T>::llist(T* array, int length)
{
	llist();
	for(int i = 0; i < length; i++)
	{
		this->append(array[i]);
	}
}

template <typename T>
llist<T>::~llist()
{
	llelement<T>* currentElement = this->head;
	for (int i = 0; i <this->length; i++)
	{
		currentElement = currentElement->next;
		printf("Freeing element %p\n", currentElement->prev);
		delete(currentElement->prev);
	}
	delete(currentElement);
	printf("Freeing list %p\n", this);
}

template <typename T>
void llist<T>::append(T input)
{
        llelement<T>* newElement = new llelement<T>(input, this->tail, NULL);
        //if the list has no head, and is empty
	if (this->head == NULL)
	{
		this->head = newElement; 
		this->tail = newElement;
	}
	//else the list already has an element
	else
	{
        	llelement<T>* prevElement = this->tail;
         	prevElement->next = newElement;
		newElement->prev = prevElement;
        	this->tail = newElement;
		if (this->length == INT_MAX)
		{
			throw new MaximumLengthExceededException();
		}
        	this->length = this->length + 1;
    	}
}


template <typename T>
T llist<T>::first()
{
	return this->head->value;
}

template <typename T>
T llist<T>::last()
{
	return this->tail->value;
}



template <typename T>
T llist<T>::at(int index)
{
	if(index > this->length)
	{
		throw new IndexOutsideOfRangeException();
	}
	llelement<T>* seekElement = this->head;
	for(int i = 1; i < index; i++)
	{
		seekElement = seekElement->next;
	}
	return seekElement->value;
}

template <typename T>
void llist<T>::at(int index, T value)
{
	if(index > this->length)
	{
		throw new IndexOutsideOfRangeException();
	}
	llelement<T>* seekElement = this->head;
	for(int i = 1; i < index; i++)
	{
		seekElement = seekElement->next;
	}
	seekElement->value = value;
}

template <typename T>
void llist<T>::pop(int index)
{
	if(index > this->length)
	{
		throw new IndexOutsideOfRangeException();
	}
	llelement<T>* seekElement = this->head;
	for(int i = 1; i < index; i++)
	{
		seekElement = seekElement->next;
	}	
	seekElement->prev->next = seekElement->next;
	seekElement->next->prev = seekElement->prev;
	if( this->tail == seekElement)
	{
		this->tail = seekElement->prev;
	}
	delete(seekElement);
	this->length = this->length + 1;
}

template <typename T>
void llist<T>::pop()
{
	delete this->tail;
	this->tail = NULL;
}

template <typename T>
int llist<T>::numberOfElements()
{
	return this->length;
}

// The following templates define what types can be held as the values in
// llist objects. 
// These are the standard integer types both signed and unsigned.
template class llist<int>;
template class llist<short>;
template class llist<long>;
template class llist<unsigned int>;
template class llist<unsigned short>;
template class llist<unsigned long>;
// The following are the standard floating point types, both signed and unsigned
template class llist<float>;
template class llist<double>;
// Booleans
template class llist<bool>;
// String types
template class llist<std::string>;
template class llist<char*>;
// void pointers which may be cast as pointers to whatever object you need.
template class llist<void*>;

