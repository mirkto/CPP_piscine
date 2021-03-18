/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:27:01 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/18 18:27:03 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	std::cout << "* click click click *" << std::endl;
	this->_type = "RadScorpion";
	this->_hp = 80;
}

RadScorpion::RadScorpion(RadScorpion const & src)
	{ *this = src; }

RadScorpion &	RadScorpion::operator=(RadScorpion const & src)
{
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

RadScorpion::~RadScorpion()
	{ std::cout <<  "* SPROTCH *" << std::endl; }

void	RadScorpion::takeDamage(int damage)
	{ Enemy::takeDamage(damage); }
