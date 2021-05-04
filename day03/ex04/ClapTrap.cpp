#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Defalt"), _hitPoints(1),
_maxHitPoints(1), _energyPoints(1), _maxEnergyPoints(1),
_level(1), _meleeAttackDamage(1), _rangedAttackDamage(1),
_armorDamageReduction(1) {std::cout << "\n" << this->getName() << " is here!\n";}

ClapTrap::ClapTrap(std::string name, unsigned int HP, unsigned int maxHP,
	unsigned int EP, unsigned int maxEP, unsigned int level,
	unsigned int meleeAD, unsigned int rangedAD, unsigned int armorRD, std::string type) :
	_name(name), _hitPoints(HP), _maxHitPoints(maxHP), _energyPoints(EP), _maxEnergyPoints(maxEP),
	_level(level), _meleeAttackDamage(meleeAD), _rangedAttackDamage(rangedAD),
	_armorDamageReduction(armorRD), _type(type) { return ; }

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 75;
	this->_maxHitPoints = 75;
	this->_energyPoints = 75;
	this->_maxEnergyPoints = 75;
	this->_level = 0;
	this->_meleeAttackDamage = 25;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 0;
	this->_type = "ClapTrap";

	std::cout << "\nThe " << this->getName() <<" is here!\n";
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;

	std::cout << "Copy is complete!\n";
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Good night " << this->getName() << "...\n";
	return ;
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & src)
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
		this->_type = src._type;
	}

	std::cout << "The assignment is complete!\n";
	return *this;
}
	// Getters --------------------------------------------------------
std::string		ClapTrap::getHP() const
{
	return CLR_GRN + std::to_string(this->_hitPoints) + CLR_END;
}

std::string		ClapTrap::getEP() const
{
	return CLR_BLU + std::to_string(this->_energyPoints) + CLR_END;
}

std::string		ClapTrap::getName() const
{
	if (this->_type == "ClapTrap")
		return this->_type + " " + this->_name;
	if (this->_type == "FragTrap")
		return this->_type + CLR_YLW" " + this->_name + CLR_END;
	if (this->_type == "ScavTrap")
		return this->_type + CLR_PRP" " + this->_name + CLR_END;
	if (this->_type == "NinjaTrap")
		return this->_type + CLR_GRN" " + this->_name + CLR_END;
	if (this->_type == "SuperTrap")
		return this->_type + CLR_PRP" " + this->_name + CLR_END;
	return "Unknow type " + this->_name;
}

	// Normal move --------------------------------------------------------
void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->getName() << " attacks " << target << " at range.\n";
	std::cout << target << " takes " << this->_rangedAttackDamage << " Damage!\n";
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->getName() << " and attacks " << target << " at melee.\n";
	std::cout << target << " takes " << this->_meleeAttackDamage << " Damage!\n";
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
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
