#include "llelement.hpp"

template <typename T>
llelement<T>::llelement(T value, llelement* prevElem, llelement* nextElem)
{
        this->prev = prevElem;
        this->next = nextElem;
}

