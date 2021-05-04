#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define CLR_GRN "\033[0;32m"
# define CLR_YLW "\033[0;33m"
# define CLR_BLU "\033[0;34m"
# define CLR_RED "\033[0;31m"
# define CLR_PRP "\033[0;35m"
# define CLR_END "\033[0m"

# include <iostream>
# include <stdexcept>

template<typename T>
int	easyfind(T &obj, int num)
{
	typename T::iterator index;
	index = std::find(obj.begin(), obj.end(), num);
	if (index == obj.end())
		throw std::logic_error(CLR_RED " -- Error: number not in array" CLR_END);
	return (*index);
}

#endif