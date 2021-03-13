/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:06:23 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/12 18:06:25 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default", 100, 100, 50, 50, 1, 15, 20, 3, "ScavTrap") 
	{ std::cout << "\n The creation of the robot " << this->getName() << " is complete!\n"; }

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3, "ScavTrap") 
	{ std::cout << "\nEvil has come! " << this->getName() <<" here!\n"; }

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	*this = src;

	std::cout << "Copy of evil " << this->getName() << " is complete!\n";
	return ;
}

ScavTrap::~ScavTrap()
	{ std::cout << "\nBorn in hell " << this->getName() << "!\n"; }

ScavTrap &		ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "The assignment of evil " << this->getName() << " is complete!\n";
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

	// Special move --------------------------------------------------------
void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::cout << this->getName() << " throws challenge Newcomer!\n In game..\n Rock\n Paper\n Scissors\n";
	int i = rand() % 5;
	if (i == 0)
		std::cout << this->getName() << ": Rock\n	    " << target << ": Rock\nDraw!\n\n";
	if (i == 1)
		std::cout << this->getName() << ": Paper\n	    " << target << ": Paper\nDraw!\n\n";
	if (i == 2)
		std::cout << this->getName() << ": Scissors\n	    " << target << ": Scissors\nDraw!\n\n";
	if (i == 3)
		std::cout << this->getName() << ": Paper\n	    " << target << ": Rock\n!!!" << this->getName() << " is won!!!\n\n";
	if (i == 4)
		std::cout  << this->getName() << ": Paper\n	    " << target << ": Scissors\n!!!" << target << " is won!!!\n\n";
	return ;
}
