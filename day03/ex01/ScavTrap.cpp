/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:06:23 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/12 18:06:25 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("Defalt"), _hitPoints(100),
_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
_level(1), _meleeAttackDamage(20), _rangedAttackDamage(15),
_armorDamageReduction(3) {std::cout << "\n" << this->getName() << " is here!\n";}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	std::cout << "\nEvil has come! " << this->getName() <<" here!\n";
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;

	std::cout << "Copy of evil is complete!\n";
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\nBorn in hell " << this->getName() << "!\n";
	return ;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & src)
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

	std::cout << "The assignment of evil is complete!\n";
	return *this;
}
	// Getters --------------------------------------------------------
std::string		ScavTrap::getHP() const
{
	return CLR_GRN + std::to_string(this->_hitPoints) + CLR_END;
}

std::string		ScavTrap::getEP() const
{
	return CLR_BLU + std::to_string(this->_energyPoints) + CLR_END;
}

std::string		ScavTrap::getName() const
{
	return "ScavTrap "CLR_PRP + this->_name + CLR_END;
}

	// Normal move --------------------------------------------------------
void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << this->getName() << " laughs out loud and attacks " << target << " at range.\n";
	std::cout << target << " takes " << this->_rangedAttackDamage << " Damage!\n";
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << this->getName() << " laughs out loud and attacks " << target << " at melee.\n";
	std::cout << target << " takes " << this->_meleeAttackDamage << " Damage!\n";
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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

	// Special move --------------------------------------------------------
void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::cout << this->getName() << " throws challenge Newcomer!\n In game..\n Rock\n Paper\n Scissors\n";
	int i = rand() % 5;
	if (i == 0)
		std::cout << this->getName() << ": Rock\n	    " << target << ": Rock\nDraw!\n\n";
	if (i == 1)
		std::cout << this->getName() << ": Paper\n	    " << target << ": Paper\nDraw!\n\n";
	if (i == 2)
		std::cout << this->getName() << ": Scissors\n	    " << target << ": Scissors\nDraw!\n\n";
	if (i == 3)
		std::cout << this->getName() << ": Paper\n	    " << target << ": Rock\n!!!" << this->getName() << " is won!!!\n\n";
	if (i == 4)
		std::cout  << this->getName() << ": Paper\n	    " << target << ": Scissors\n!!!" << target << " is won!!!\n\n";
	return ;
}
