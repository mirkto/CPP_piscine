/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:35:42 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 16:35:47 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

humanB::humanB()
{
	this->_name = "\033[0;32m""Anonimus""\033[0m";
}

humanB::humanB(std::string name) : _name("\033[0;32m" + name + "\033[0m")
{
}

humanB::~humanB()
{
}

void		humanB::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_inHand->getType() << std::endl;
}

void		humanB::setWeapon(Weapon &newWeapon)
{
	this->_inHand = &newWeapon;
}
