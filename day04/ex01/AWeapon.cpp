/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:56:51 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/17 20:56:53 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::AWeapon(AWeapon const & src)
	{ *this = src; }

AWeapon &	AWeapon::operator=(AWeapon const & src)
{
	this->_name = src._name;
	this->_apcost = src._apcost;
	this->_damage = src._damage;
	return *this;
}

AWeapon::~AWeapon() { }
	// { delete this; }

std::string const &		AWeapon::getName() const
	{ return this->_name; }

int		AWeapon::getAPCost() const
	{ return this->_apcost; }

int		AWeapon::getDamage() const
	{ return this->_damage; }
