/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:16:05 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 19:16:07 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type_now = "Zombie";
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type_now = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, _type_now));
}

Zombie*	ZombieEvent::randomChump()
{
	return (new Zombie());
}
