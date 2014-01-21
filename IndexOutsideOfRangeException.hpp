#include <exception>

class IndexOutsideOfRangeException: public std::exception
{
        virtual const char* what() const throw()
        {
                return "Invalid index is outside the length of the linked list";
        }    
};

