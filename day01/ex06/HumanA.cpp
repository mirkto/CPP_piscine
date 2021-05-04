#include "HumanA.hpp"

humanA::humanA()
{
	this->_name = "\033[0;32m""Anonimus""\033[0m";
}

humanA::humanA(std::string name, Weapon &newWeapon)
{
	this->_name = "\033[0;32m" + name + "\033[0m";
	this->_inHand = &newWeapon;
}

humanA::~humanA()
{
}

void			humanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_inHand->getType() << std::endl;
}
