#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_xp = 0;
	this->_type = type;
}

AMateria::AMateria(const AMateria& src)
	{ *this = src; }

AMateria &		AMateria::operator=(const  AMateria &src)
{
	this->_xp = src._xp;
	this->_type = src._type;
	return (*this);
}

std::string const & AMateria::getType() const
	{ return this->_type; }

unsigned int	AMateria::getXP() const
	{ return this->_xp; }

void	AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
