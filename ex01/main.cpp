#include "iter.hpp"
#include <iomanip>

void printHeader(const std::string& str)
{
	int size = 50;
	int totalPad = size - str.size();
	(totalPad < 0) ? totalPad = 0 : totalPad;
	int lPad = totalPad / 2;
	int rPad = totalPad - lPad;

	std::cout << std::endl << SMGREEN;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setfill(' ') << std::setw(lPad + str.size()) << str << std::setw(rPad) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << RESET << std::endl;
}

// int main(void)
// {
//     {
//         printHeader("Test: std::string");

//         std::string array[5] = {"Test1", "Test2", "Test3", "Test4", "Test5"};
//         ::iter(array, 5, printElement<std::string>);
//     }
//     {
//         printHeader("Test: int");

//         int array[5] = {1, 2, 3, 4 ,5};
//         ::iter(array, 5, printElement<int>);

//     }
//     {
//         printHeader("Test: pointer");

//         char a = 'a';
//         char b = 'b';
//         char c = 'c';
//         char d = 'd';
//         char e = 'e';

//         char *array[5] = {&a, &b, &c, &d ,&e};

//         ::iter(array, 5, printElement<void *>);

//     }

//     return 0;
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );
}
