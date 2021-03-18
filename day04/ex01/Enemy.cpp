/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:57:37 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/17 20:57:39 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() { }


Enemy::Enemy(int hp, std::string const & type)
{
	this->_type = type;
	this->_hp = hp;
}

Enemy::Enemy(Enemy const & src)
	{ *this = src; }

Enemy &		Enemy::operator=(Enemy const & src)
{
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

Enemy::~Enemy() { }
	// { delete this; }

std::string const &	Enemy::getType() const
	{ return this->_type; }

int					Enemy::getHP() const
	{ return this->_hp; }

void	Enemy::takeDamage(int damage)
{
	if (damage > 0 )
		this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
}