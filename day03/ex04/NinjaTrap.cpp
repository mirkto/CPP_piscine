#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("Default", 60, 60, 120, 120, 1, 60, 5, 0, "NinjaTrap") 
	{ std::cout << "\n The creation of the robot " << this->getName() << " is complete! Nin-nin!\n"; }

NinjaTrap::NinjaTrap(std::string name)// : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0, "NinjaTrap") 
{
	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_type = "NinjaTrap";

	std::cout << "\n" << this->getName() <<" is here! Nin-nin!\n";
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src)
{
	*this = src;

	std::cout << "Copy of " << this->getName() << " is complete! Nin-nin!\n";
	return ;
}

NinjaTrap::~NinjaTrap()
	{ std::cout << "\n" << this->getName() << " throws a smoke grenade! Nin-nin!\n"; }

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const & src)
{
	std::cout << "The assignment of " << this->getName() << " is complete! Nin-nin!\n";
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

// 	// Special move --------------------------------------------------------
void	NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	std::cout << "Hello, " << target.getName() << " Nin-nin!\n\n";
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	std::cout << "Аeature overview completed\n" << target.getName() << " has ";
	std::cout << target.getEP() << " Enegry Point and " << target.getHP() << " Hit Points! Nin-nin!\n\n";
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::cout << "KARADA! ";
	this->meleeAttack(target.getName());
	std::cout << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	std::cout << "Hello brother! Waving hand to " << target.getName() << "! Nin-nin!\n\n";
}
