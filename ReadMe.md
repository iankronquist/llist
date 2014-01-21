llist
=====

A simple linked list implementation to practice C++ templating and 
basic data structures.  
This program has been designed to be used in future projects with an eye 
towards separation of concerns and a clean interface.  

License:
--------
Standard MIT license.

Documentation:
--------------
The `llist` class is designed to be used by the programmer. The programmer
should not touch the `llelement` or `IndexOutOfRangeException` classes directly.
`llists` are of a single type, similar to vectors. A sample declaration is 
below.  
	```
	llist<int>* int_linked_list = new llist<int>();
	```
The maximum size of a `llist` is INT_MAX. If an additional element is added 
a MaximumLengthExceededException will be thrown.

The following public methods are available:
* `llist()`  
	This constructor creates an empty `llist`.
* `llist(Type* array, int length)`  
	This constructor builds a `llist` from a provided array.
*  `~llist()`  
	This is a simple destructor which frees all elements in the `llist`
	and their values.
* `void append(Type value)`  
	Append the value to the end of the list.
* `int firstIndexOf(Type value)`  
	Returns the index of the first occurrence of the provided value.
* `int lastIndexOf(Type value)`  
	Returns the index of the last occurrence of the provided value.
* `Type first()`  
	Returns the value of the first element of the list.
* `Type last()`  
	Returns the value of the last element of the list.
* `Type at(int index)`  
	Returns the value of the index-th positioned llelement in the list.
* `void at(int index, Type value)`  
	Assigns the provided value to the index-th positioned llelement in 
	the list.
* `void pop()`  
	Removes the last (tail) element of the list.
* `void pop(int index)`  
	Removes the index-th element of the list.
* `void push(Type value)`  
	An overload of `append(Type value)`.
* `void push(int index, Type value)`  
	An overload of `void at(int index, Type value)`.
* `int numberOfElements()`
	Returns the number of elements in the `llist`.

Below is an example of the `llist` in use
```
	int array[5];
	array = {1, 2, 3, 4, 5};
	
	llist<int>* int_list = new llist(array, 5);
	int_list->append(6);
	printf("%i\n", int_list->last());	
	// prints 6
	printf("%i\n", int_list->at(3));	
	// prints 4
	int_list->pop();
	int_list->pop(100);
	// Throws IndexOutsideOfRangeException.
```




