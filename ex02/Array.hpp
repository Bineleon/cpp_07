#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template < typename T >
class Array
{
    public:
        Array(void): _array(NULL), _n(0){}
        Array(unsigned int n): _n(n)
        {
            _array = new T[n];
        }
        Array(const Array& src)
        {
            for (int i = 0; i < _n; ++i)
                this->_array[i] = src._array[i];
        }
	    Array& operator=(const Array& rhs)
        {
            // delete _array;
            // _array = new (*rhs._array);
            // return *this;
        }
        ~Array(void){}
    private:
        unsigned int _n;
        T *_array;

};

# define RESET "\033[0m"
# define SMRED "\033[0;31m"
# define SMGREEN "\033[0;32m"
# define SMYELLOW "\033[0;33m"
# define SMBLUE "\033[0;34m"
# define SMMAGENTA "\033[0;35m"
# define SMCYAN "\033[0;36m"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"

#endif
