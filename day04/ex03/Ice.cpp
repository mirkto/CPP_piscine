/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:28 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 20:10:10 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(Ice const & src) : AMateria("ice")
	{ _xp = src._xp; }

Ice	&Ice::operator=(Ice const & src)
{
	_xp = src._xp;
	return(*this);
}

void		Ice::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*		Ice::clone() const
	{ return (new Ice); }
