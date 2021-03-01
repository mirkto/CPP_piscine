/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:35:07 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 16:35:10 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main()
{
	{
	Weapon		club = Weapon("crude spiked club");

	humanA		bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon		club = Weapon("carrot");

	humanB		jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("carrot of fate");
	jim.attack();
	}
	return (0);
}
