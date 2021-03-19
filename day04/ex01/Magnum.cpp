/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Magnum.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:47:54 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 16:51:20 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Magnum.hpp"

Magnum::Magnum()
{
	this->_name = "Magnum";
	this->_apcost = 13;
	this->_damage = 100;
}

Magnum::Magnum(Magnum const & src)
{
	*this = src;
}

Magnum &	Magnum::operator=(Magnum const & src)
{
	this->_name = src._name;
	this->_apcost = src._apcost;
	this->_damage = src._damage;
	return *this;
}

Magnum::~Magnum() { }

void	Magnum::attack() const
	{ std::cout << "* BAAM! *" << std::endl; }
