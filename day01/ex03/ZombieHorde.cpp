/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:43:10 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 18:43:13 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num)
{
	this->_horde = new Zombie[num];
}

ZombieHorde::~ZombieHorde()
{
	delete [] _horde;
}
