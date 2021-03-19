/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:52:59 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 18:46:12 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
	{ std::cout << "Tactical Marine ready for battle!" << std::endl; }

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	*this = src;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
	{ std::cout << "Aaargh..." << std::endl; }

TacticalMarine &	TacticalMarine::operator=(TacticalMarine const & src)
{
	(void)src;
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone() const
{
	TacticalMarine *src = new TacticalMarine(*this);
	return (src);
}

void	TacticalMarine::battleCry() const
	{ std::cout << "For the holy PLOT!" << std::endl; }

void	TacticalMarine::rangedAttack() const
	{ std::cout << "* attacks with a bolter *" << std::endl; }

void	TacticalMarine::meleeAttack() const
	{ std::cout << "* attacks with a chainsword *" << std::endl; }
