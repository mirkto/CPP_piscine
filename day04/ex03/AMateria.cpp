/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:13 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 20:11:13 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	_xp = 0;
	_type = type;
}

AMateria::AMateria(const AMateria& src)
	{ *this = src; }

AMateria &		AMateria::operator=(const  AMateria &src)
{
	_xp = src._xp;
	_type = src._type;
	return (*this);
}

std::string const & AMateria::getType() const
	{ return (_type); }

unsigned int	AMateria::getXP() const
	{ return (_xp); }

void	AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}