/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:59:03 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/17 20:59:04 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	this->_type = "Super Mutant";
	this->_hp = 170;
}

SuperMutant::SuperMutant(SuperMutant const & src)
	{ *this = src; }

SuperMutant &	SuperMutant::operator=(SuperMutant const & src)
{
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

SuperMutant::~SuperMutant()
	{ std::cout <<  "Aaargh..." << std::endl; }

void	SuperMutant::takeDamage(int damage)
	{ Enemy::takeDamage(damage - 3); }
