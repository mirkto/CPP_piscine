/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:52:53 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/20 20:16:52 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "Necron.hpp"

int		main()
{
	std::cout << CLR_YLW"\n---subject main---"CLR_END << std::endl;
	// subject main -----
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	// additional main -----
	std::cout << CLR_YLW"\n--- additional main #1 test Necron class---"CLR_END << std::endl;
	{
		int		num = 5;//number of marine
		ISpaceMarine* trash[num];
		for (int i = 0; i < num; i++)
			trash[i] = new Necron("trash-" + std::to_string(i + 2023));
		std::cout << std::endl;
		ISquad* vanguard = new Squad;
		for (int i = 0; i < num; i++)
			vanguard->push(trash[i]);
		vanguard->rollCall();
		delete vanguard;
	}
	std::cout << CLR_YLW"\n--- additional main #2 test copy and operator= ---"CLR_END << std::endl;
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISpaceMarine* test1(bob);
		ISpaceMarine* test2 = jim;
			std::cout << std::endl;

		ISquad* vlc = new Squad;
		vlc->push(test1);
		vlc->push(test2);
		ISquad* testS1(vlc);
		ISquad* testS2 = vlc;
		for (int i = 0; i < testS1->getCount(); ++i)
		{
			ISpaceMarine* cur = testS1->getUnit(i);
			cur->battleCry();
			// cur->rangedAttack();
			cur->meleeAttack();
		}
			std::cout << std::endl;
		for (int i = 0; i < testS2->getCount(); ++i)
		{
			ISpaceMarine* cur = testS2->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			// cur->meleeAttack();
		}
			std::cout << std::endl;
	delete vlc;
	}
		std::cout << CLR_YLW"\n--- additional main #3 test copy(NULL) and operator=(NULL) ---"CLR_END << std::endl;
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		if (bob)
			if (jim)
				;
		std::cout << std::endl;

		ISquad* vlc = new Squad;
		ISquad* testS1(vlc);
		ISquad* testS2 = vlc;
		for (int i = 0; i < testS1->getCount(); ++i)
		{
			ISpaceMarine* cur = testS1->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
			std::cout << std::endl;
		for (int i = 0; i < testS2->getCount(); ++i)
		{
			ISpaceMarine* cur = testS2->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
			std::cout << std::endl;
		delete vlc;
	}
	return (0);
}