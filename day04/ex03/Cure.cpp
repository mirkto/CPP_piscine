#include "Cure.hpp"

Cure::Cure(Cure const & src) : AMateria("cure")
	{ *this = src; }

Cure &Cure::operator=(Cure const & src)
{
	this->_xp = src._xp;;
	return (*this);
}

void		Cure::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria*		Cure::clone() const
	{ return new Cure; }
