#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	this->_name = "Plasma Rifle";
	this->_apcost = 5;
	this->_damage = 21;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
	{ *this = src; }

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const & src)
{
	this->_name = src._name;
	this->_apcost = src._apcost;
	this->_damage = src._damage;
	return *this;
}

PlasmaRifle::~PlasmaRifle() { }

void	PlasmaRifle::attack() const
	{ std::cout << "* piouuu piouuu piouuu *" << std::endl; }

