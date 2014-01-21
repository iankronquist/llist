#include <exception>

class MaximumLengthExceededException: public std::exception
{
        virtual const char* what() const throw()
        {
                return "List is has reached the maximum size and another \
		element cannot be added";
        }    
};

