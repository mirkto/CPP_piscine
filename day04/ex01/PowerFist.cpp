#include "PowerFist.hpp"

PowerFist::PowerFist()
{
	this->_name = "Power Fist";
	this->_apcost = 8;
	this->_damage = 50;
}

PowerFist::PowerFist(PowerFist const & src)
{
	*this = src;
}

PowerFist &	PowerFist::operator=(PowerFist const & src)
{
	this->_name = src._name;
	this->_apcost = src._apcost;
	this->_damage = src._damage;
	return *this;
}

PowerFist::~PowerFist() { }

void	PowerFist::attack() const
	{ std::cout << "* pschhh... SBAM! *" << std::endl; }
