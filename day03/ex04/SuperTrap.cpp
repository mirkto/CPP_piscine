/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:06:23 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/12 18:06:25 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	this->_level = 1;
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
	this->_type = "SuperTrap";

	std::cout << "\nThe supreme " << this->getName() <<" is super here! Yeeah!\n";
}

SuperTrap::SuperTrap(SuperTrap const & src) : NinjaTrap(src), FragTrap(src)
{
	*this = src;

	std::cout << "Copy of " << this->getName() << " is complete!\n";
	return ;
}

SuperTrap::~SuperTrap()
	{ std::cout << "\n" << this->getName() << " use super bye move!!\n"; }

SuperTrap &		SuperTrap::operator=(SuperTrap const & src)
{
	std::cout << "The assignment of " << this->getName() << " is complete!\n";
	if (this != &src)
		FragTrap::operator=(src);
	return *this;
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}
