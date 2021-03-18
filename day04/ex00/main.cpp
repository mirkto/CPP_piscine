/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:39:36 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/15 20:39:38 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Slave.hpp"

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

int			main()
{
	std::cout << CLR_YLW"\n---subject main---"CLR_END << std::endl;
	// subject main -----
	{
	
	Sorcerer	robert("Robert", "the Magnificent");

	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	}
	// additional main -----
	{
	std::cout << CLR_YLW"\n--- additional main #1 test copy constructor ---"CLR_END << std::endl;

	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");

	Sorcerer	test00(robert);
	Victim		test01(jim);
	Peon		test02(joe);
	std::cout << "--------------" << std::endl;
	std::cout << test00 << test01 << test02;

	std::cout << CLR_YLW"\n--- additional main #2 test operator= ---"CLR_END << std::endl;
	Sorcerer	test03("TESTING","TESTING");
	Victim		test04("TESTING");
	Peon		test05("TESTING");
	test03 = robert;
	test04 = jim;
	test05 = joe;
	std::cout << "--------------" << std::endl;
	std::cout << test03 << test04 << test05;
	
	std::cout << CLR_YLW"\n---additional main #3 test metods ---"CLR_END << std::endl;
	test00.polymorph(test01);
	test00.polymorph(test02);
	test01.getPolymorphed();
	test02.getPolymorphed();
	std::cout << "--------------" << std::endl;
	test03.polymorph(test04);
	test03.polymorph(test05);
	test04.getPolymorphed();
	test05.getPolymorphed();
	std::cout << CLR_YLW"\n---additional main #4 new class ---"CLR_END << std::endl;
	Slave		test("Andru");
	std::cout << test;
	robert.polymorph(test);
	std::cout << CLR_RED"\n---end programm---"CLR_END << std::endl;
	}
	return 0;
}
