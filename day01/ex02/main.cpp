/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:15:34 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 19:15:40 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

#define NUMBER_OF_ZPMBIE 2
#define SPACE "\n		"

int		main()
{
	std::cout << SPACE"--- let the fun begin ---\n";
	srand(time(NULL));

	ZombieEvent ev;
	Zombie Sonie = Zombie("Angela Ziegler", "Mercy", "Heroes never die!");
	Zombie army[NUMBER_OF_ZPMBIE];
	Zombie *ivanPtr;
	Zombie *armyPtr[NUMBER_OF_ZPMBIE];


	std::cout << SPACE"--- 2 hours later ---\n";
	ev.setZombieType("Big Evil Zombie");
	ivanPtr = ev.newZombie("Ivan Mochalckin");

	std::cout << SPACE"--- 6 hours later ---\n";
	for (int i = 0; i < NUMBER_OF_ZPMBIE; i++)
		armyPtr[i] = ev.randomChump();

	std::cout << SPACE"--- the sun came up ---\n";
	for (int i = 0; i < NUMBER_OF_ZPMBIE; i++)
		delete armyPtr[i];
	delete ivanPtr;
	return (0);
}
