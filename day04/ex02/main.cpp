/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:52:53 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 19:11:00 by ngonzo           ###   ########.fr       */
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
	std::cout << CLR_YLW"\n--- additional main #1 test ---"CLR_END << std::endl;
	{
		// comming soon..
	}
	return (0);
}