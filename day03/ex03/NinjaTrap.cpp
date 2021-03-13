/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:06:23 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/12 18:06:25 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("Default", 60, 60, 120, 120, 1, 60, 5, 0, "NinjaTrap") 
	{ std::cout << "\n The creation of the robot " << this->getName() << " is complete! Nin-nin!\n"; }

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0, "NinjaTrap") 
	{ std::cout << "\n" << this->getName() <<" is here! Nin-nin!\n"; }

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src)
{
	*this = src;

	std::cout << "Copy of " << this->getName() << " is complete! Nin-nin!\n";
	return ;
}

NinjaTrap::~NinjaTrap()
	{ std::cout << "\n" << this->getName() << " is karada! Nin-nin!\n"; }

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const & src)
{
	std::cout << "The assignment of " << this->getName() << " is complete! Nin-nin!\n";
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

// 	// Special move --------------------------------------------------------
void	NinjaTrap::ninjaShoebox(std::string const & target)
{
	std::cout << this->getName() << " use ninja Shoebox!\n";
}
