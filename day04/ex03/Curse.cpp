#include "Curse.hpp"

Curse::Curse(Curse const & src) : AMateria("curse")
	{ *this = src; }

Curse &	Curse::operator=(Curse const & src)
{
	this->_xp = src._xp;;
	return (*this);
}

void		Curse::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* curses " << target.getName() << "’s and turns into a frog *" << std::endl;
}

AMateria*		Curse::clone() const
	{ return new Curse; }