/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:36:23 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 16:36:25 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "\033[0;33m""none""\033[0m";
}

Weapon::Weapon(std::string type)
{
	this->_type = "\033[0;33m" + type + "\033[0m";
}

Weapon::~Weapon()
{
}

void			Weapon::setType(std::string type)
{
	this->_type = "\033[0;33m" + type + "\033[0m";
}

std::string const	&Weapon::getType() const
{
	return (this->_type);
}
