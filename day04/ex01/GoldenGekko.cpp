/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GoldenGekko.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:57:18 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 16:57:19 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GoldenGekko.hpp"

GoldenGekko::GoldenGekko()
{
	std::cout << "* GECK-O GECK-O GECK-O *" << std::endl;
	this->_type = "Golden Gekko";
	this->_hp = 120;
}

GoldenGekko::GoldenGekko(GoldenGekko const & src)
	{ *this = src; }

GoldenGekko &	GoldenGekko::operator=(GoldenGekko const & src)
{
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

GoldenGekko::~GoldenGekko()
	{ std::cout <<  "* geeckk-ooooo... *" << std::endl; }

void	GoldenGekko::takeDamage(int damage)
	{ Enemy::takeDamage(damage); }
