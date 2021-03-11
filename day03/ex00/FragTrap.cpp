#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("FR4G-TP"), _hitPoints(100),
_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
_armorDamageReduction(5) {}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << "The creation of the robot " << this->_name <<" is complete!\n";
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;

	std::cout << "Copy is complete!\n";
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Bye-bye " << this->_name << "!\n";
	return ;
}

FragTrap &		FragTrap::operator=(FragTrap const & src)
{
	if (this != &src)
	{
		this->_name = src.getName();
		this->_hitPoints = src.getHP();
		this->_energyPoints = src.getEP();
	}

	std::cout << "The assignment is complete!\n";
	return *this;
}
	// Getters
unsigned int	FragTrap::getHP() const
{
	std::cout << this->_name << " has " << this->_hitPoints << " health points\n";
	// return this->_hitPoints;
	return 0;
}

unsigned int	FragTrap::getEP() const
{
	std::cout << this->_name << " has " << this->_energyPoints << " energy points\n";
	// return this->_energyPoints;
	return 0;
}

std::string		FragTrap::getName() const
{
	return this->_name;
}

	// Normal move
void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " attacks in ranged combat the " << target <<"!\n";
	std::cout << target << " takes " << this->_rangedAttackDamage << " damage!\n";
	return ;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " attacks in melee combat the " << target <<"!\n";
	std::cout << target << " takes " << this->_meleeAttackDamage << " damage!\n";
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " damage!\n";
	this->_hitPoints -= amount;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " repaired " << amount << " damage!\n";
	this->_hitPoints += amount;
	return ;
}

	// Special move
void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::cout << this->_name << " attacks the " << target << " with a special move!\n";
	std::cout << target << " is destroyed!\n";
	this->_energyPoints -= 25;
	return ;
}
