/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Сurse.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:05:38 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/20 19:06:43 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Сurse.hpp"

Сurse::Сurse(Сurse const & src) : AMateria("curse")
	{ *this = src; }

Сurse &	Сurse::operator=(Сurse const & src)
{
	this->_xp = src._xp;;
	return (*this);
}

void		Сurse::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* curses " << target.getName() << "’s and turns into a frog *" << std::endl;
}

AMateria*		Сurse::clone() const
	{ return new Сurse; }