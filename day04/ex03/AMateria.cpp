/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:13 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/20 20:00:52 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_xp = 0;
	this->_type = type;
}

AMateria::AMateria(const AMateria& src)
	{ *this = src; }

AMateria &		AMateria::operator=(const  AMateria &src)
{
	this->_xp = src._xp;
	this->_type = src._type;
	return (*this);
}

std::string const & AMateria::getType() const
	{ return this->_type; }

unsigned int	AMateria::getXP() const
	{ return this->_xp; }

void	AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
