#ifndef LLELEMENT_HPP
#define LLELEMENT_HPP
//#include "llist.hpp"

template <typename T>
class llelement
{
	public:
		llelement();
		//llelement(T value, llelement* prevElem, llelement* nextElem);
		//llist* list;
		llelement* next;
		llelement* prev;
		//T value;
};
#endif

