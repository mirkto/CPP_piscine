/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:06:23 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/12 18:06:25 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Defalt"), _hitPoints(100),
_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
_level(1), _meleeAttackDamage(20), _rangedAttackDamage(15),
_armorDamageReduction(3) {std::cout << "\n" << this->getName() << " is here!\n";}

ClapTrap::ClapTrap(std::string name)
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

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;

	std::cout << "Copy of evil is complete!\n";
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\nBorn in hell " << this->getName() << "!\n";
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
	}

	std::cout << "The assignment of evil is complete!\n";
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
	return "ClapTrap "CLR_PRP + this->_name + CLR_END;
}

	// Normal move --------------------------------------------------------
void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->getName() << " laughs out loud and attacks " << target << " at range.\n";
	std::cout << target << " takes " << this->_rangedAttackDamage << " Damage!\n";
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->getName() << " laughs out loud and attacks " << target << " at melee.\n";
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
