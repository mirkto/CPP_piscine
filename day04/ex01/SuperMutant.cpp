#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	this->_type = "Super Mutant";
	this->_hp = 170;
}

SuperMutant::SuperMutant(SuperMutant const & src)
	{ *this = src; }

SuperMutant &	SuperMutant::operator=(SuperMutant const & src)
{
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

SuperMutant::~SuperMutant()
{
	if (this->_hp == 0)
		std::cout <<  "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
	{ Enemy::takeDamage(damage - 3); }
