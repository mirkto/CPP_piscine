/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:57:13 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 17:36:50 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() { }

Character::~Character() { }
	// { delete this; }

Character::Character(std::string const & name)
{
	this->_name = name;
	this->_AP = 40;
	this->_weapon = NULL;
}

Character::Character(Character const & src)
	{ *this = src; }

Character &	Character::operator=(Character const & src)
{
	this->_name = src._name;
	this->_AP = src._AP;
	this->_weapon = src._weapon;
	return *this;
}

void	Character::recoverAP()
{
	if (this->_AP < 40)
		this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void	Character::equip(AWeapon* weapon)
	{ this->_weapon = weapon; }

std::string const &	Character::getName() const
	{ return this->_name; }

int		Character::getAP() const
	{ return this->_AP; }

AWeapon*		Character::getWeaponInfo() const
	{ return this->_weapon; }

void	Character::attack(Enemy* enemy)
{
	int weaponAPCost = this->_weapon->getAPCost();
	int weaponDamage = this->_weapon->getDamage();

	
	if (!enemy || !this->_weapon)
	{
		std::cout << this->_name << " has no enemy or no weapons!" << std::endl;
		return ;
	}
	if (this->_AP < weaponAPCost)
	{
		std::cout << this->_name << " doesn't have enough action points to attack!" << std::endl;
		return ;
	}
	this->_AP -= weaponAPCost;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(weaponDamage);
	if ((enemy->getHP()) == 0)
		delete enemy;
}

std::ostream &	operator<<(std::ostream & out , Character const & src)
{
	out << src.getName() << " has " << src.getAP() << " and ";
	if (src.getWeaponInfo())
		out << "wields a " << src.getWeaponInfo()->getName() << std::endl;
	else
		out << "is unarmed" << std::endl;
	return out;
}

