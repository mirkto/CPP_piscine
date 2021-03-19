/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:33 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 19:17:58 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int		main()
{
	std::cout << CLR_YLW"\n---subject main---"CLR_END << std::endl;
	// subject main -----
	{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	}
	// additional main -----
	std::cout << CLR_YLW"\n--- additional main #1 test ---"CLR_END << std::endl;
	{
		// comming soon..
	}
	return (0);
}