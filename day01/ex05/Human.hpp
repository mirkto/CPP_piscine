#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
private:
	Brain	_Brain;

public:
	Human();
	~Human();

	Brain			&getBrain();
	std::string		identify();
};

#endif
