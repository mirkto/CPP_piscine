
#ifndef ITER_HPP
# define ITER_HPP

# define CLR_GRN "\033[0;32m"
# define CLR_YLW "\033[0;33m"
# define CLR_BLU "\033[0;34m"
# define CLR_RED "\033[0;31m"
# define CLR_PRP "\033[0;35m"
# define CLR_END "\033[0m"

# include <iostream>
# include <string>

template<typename T>
void print(T const & x)
	{ std::cout << x << std::endl; }

template<typename T>
void iter(T *arr, int len, void (*f)(T const & x))
{
	for(int i = 0; i < len; i++)
		(*f)(arr[i]);
}

class Awesome
{
private:
	int _n;
public:
	Awesome()				: _n(42) { }
	Awesome(int n)			: _n(n) { }
	int getN() const		{ return this->_n; }
};

std::ostream &		operator<<(std::ostream & out, Awesome const & src)
	{ return out << src.getN(); }

#endif