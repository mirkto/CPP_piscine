#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string		Brain::identify()
{
	std::stringstream	tmp;

	tmp << this;
	return (tmp.str());
}
