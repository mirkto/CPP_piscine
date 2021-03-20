/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:22 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/20 18:01:31 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(Cure const & src) : AMateria("cure")
	{ *this = src; }

Cure &Cure::operator=(Cure const & src)
{
	this->_xp = src._xp;;
	return (*this);
}

void		Cure::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria*		Cure::clone() const
	{ return new Cure; }
