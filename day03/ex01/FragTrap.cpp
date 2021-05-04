#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("Defalt"), _hitPoints(100),
_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
_armorDamageReduction(5) {std::cout << "\n" << this->getName() << " is here!\n";}

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

	std::cout << "\nThe creation of the robot " << this->getName() <<" is complete!\n";
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
	std::cout << "\nBye-bye " << this->getName() << "!\n";
	return ;
}

FragTrap &		FragTrap::operator=(FragTrap const & src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_maxHitPoints = src._maxHitPoints;
		this->_maxEnergyPoints = src._maxEnergyPoints;
		this->_level = src._level;
		this->_meleeAttackDamage = src._meleeAttackDamage;
		this->_rangedAttackDamage = src._rangedAttackDamage;
		this->_armorDamageReduction = src._armorDamageReduction;
	}

	std::cout << "The assignment is complete!\n";
	return *this;
}
	// Getters
std::string		FragTrap::getHP() const
{
	return CLR_GRN + std::to_string(this->_hitPoints) + CLR_END;
}

std::string		FragTrap::getEP() const
{
	return CLR_BLU + std::to_string(this->_energyPoints) + CLR_END;
}

std::string		FragTrap::getName() const
{
	return "FR4G-TP "CLR_YLW + this->_name + CLR_END;
}

	// Normal move
void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << this->getName() << " attacks " << target << " at range.\n";
	std::cout << target << " takes " << this->_rangedAttackDamage << " Damage!\n";
	return ;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << this->getName() << " attacks " << target << " at melee.\n";
	std::cout << target << " takes " << this->_meleeAttackDamage << " Damage!\n";
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{

	std::cout << this->getName() << " takes " << amount << " Damage!\n";
	std::cout << "Armor reduced damage by " << this->_armorDamageReduction << "\n";

	unsigned int	trueDamage;
	if (this->_armorDamageReduction > amount)
		trueDamage = 0;
	else
		trueDamage = amount - this->_armorDamageReduction;
	if (this->_hitPoints <= trueDamage)
	{
		std::cout << this->getName() << " takes a critical Damage and shell-shocked!\n";
		this->_hitPoints = 0;
	}
	else
		this->_hitPoints -= trueDamage;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << this->getName() << " repaired " << amount << " Hit Points""!\n";
	this->_hitPoints += amount;
	if (this->_hitPoints >= this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << "Hit Points is full!\n";
	}
	return ;
}

	// Special move
void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::cout << this->getName() << " use special move against " << target << "!\n";
	if (this->_energyPoints < 25)
		std::cout << "Not enough energy for use special move!\n";
	else
	{
		this->_energyPoints -= 25;
		int i = rand() % 5;
		if (i == 0)
			std::cout << "<" << i <<"> " << "Attack hits exactly the " << target << " and destroys it!\n";
		if (i == 1)
			std::cout << "<" << i <<"> " << target << " heroically dodges the attack!!\n";
		if (i == 2)
			std::cout << "<" << i <<"> " << "Attack is passing by...\n";
		if (i == 3)
			std::cout << "<" << i <<"> " << "Attack hit the " << target << " target, but did not kill.\n";
		if (i == 4)
			std::cout << "<" << i <<"> " << "Ora-ora-ora-ora-ora!!\n";
	}
	return ;
}

void			FragTrap::setDefalt()
{
	FragTrap();
}
