#include "Ice.hpp"

Ice::Ice(Ice const & src) : AMateria("ice")
	{ this->_xp = src._xp; }

Ice	&Ice::operator=(Ice const & src)
{
	this->_xp = src._xp;
	return(*this);
}

void		Ice::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*		Ice::clone() const
	{ return new Ice; }
