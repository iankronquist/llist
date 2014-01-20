#include "llist.hpp"
//#include <stdio.h> //for debugging
#include <cassert>

llist::llist()
{
	this->head = NULL;//llelementCreate(0, NULL, NULL);
	this->tail = NULL;
	this->length = 0;
}

llist::llist(T* array, int length)
{
	llistCreate();
	for(int i = 0; i < length; i++)
	{
		this->append(array[i]);
	}
}

~llist::llist()
{
	llelement* currentElement = this->head;
	for (int i = 0; i <this->length; i++)
	{
		currentElement = currentElement->next;
		printf("Freeing element %p\n", currentElement->prev);
		delete(currentElement->prev);
	}
	delete(currentElement);
	printf("Freeing list %p\n", list);
	delete(list);
}

void llist::append(T input)
{
        struct llelement* newElement = new llelement(input, list->tail, NULL);
        //if the list has no head, and is empty
	if (this->head == NULL)
	{
		this->head = newElement; 
		this->tail = newElement;
	}
	//else the list already has an element
	else
	{
        	llelement* prevElement = this->tail;
         	prevElement->next = newElement;
		newElement->prev = prevElement;
        	this->tail = newElement;
        	this->length = this->length + 1;
    	}
}


T llist::head()
{
	return this->head->value;
}

T llist::tail()
{
	return this->tail->value;
}



T llist::at(int index)
{
	if(index > list->length)
	{
		throw new IndexOutsideOfRangeException();
	}
	llelement* seekElement = this->head;
	for(int i = 1; i < index; i++)
	{
		seekElement = seekElement->next;
	}
	return seekElement->value;
}

void llist::at(int index, T value)
{
	if(index > this->length)
	{
		throw new IndexOutsideOfRangeException();
	}
	llelement* seekElement = list->head;
	for(int i = 1; i < index; i++)
	{
		seekElement = seekElement->next;
	}
	seekElement->value = value;
}

void llist::pop(int index)
{
	if(index > list->length)
	{
		throw new IndexOutsideOfRangeException();
	}
	llelement* seekElement = list->head;
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
	this->length = list->length + 1;
}

