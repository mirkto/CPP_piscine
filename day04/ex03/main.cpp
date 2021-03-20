/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:33 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/20 20:07:57 by ngonzo           ###   ########.fr       */
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
#include "Сurse.hpp"

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
	std::cout << CLR_YLW"\n--- additional main #1 test new materia, empty materia, no free slots , equip bob ---"CLR_END << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Сurse());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");//1
		me->equip(tmp);
		tmp = src->createMateria("cure");//2
		me->equip(tmp);
		tmp = src->createMateria("curse");//3
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		std::cout << "-- my turn" << std::endl;// -----
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);

		std::cout << "-- test not equip" << std::endl;// -----
		me->use(3, *bob);
		me->use(4, *bob);
		me->use(-1, *bob);

		std::cout << "-- test empty materia, no free slots" << std::endl;// -----
		tmp = src->createMateria("");// empty matter
		me->equip(tmp);
		tmp = src->createMateria("ice");//4
		me->equip(tmp);
		tmp = src->createMateria("ice");//5 no slots
		me->equip(tmp);
		tmp = src->createMateria("BuGaGa");// matter not learn == empty
		me->equip(tmp);

		std::cout << "-- turn bob" << std::endl;// -----
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);

		bob->use(0, *me);
		bob->use(1, *me);
		bob->use(2, *me);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << CLR_YLW"\n--- additional main #2 test xp ---"CLR_END << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Сurse());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("curse");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		std::cout << "-- test ice XP" << std::endl;// -----
		std::cout << me->getXP(0) << std::endl;
		me->use(0, *bob);
		std::cout << me->getXP(0) << std::endl;
		me->use(0, *bob);
		std::cout << me->getXP(0) << std::endl;
		me->use(0, *bob);
		std::cout << me->getXP(0) << std::endl;

		std::cout << "\n-- test cure XP" << std::endl;// -----
		std::cout << me->getXP(1) << std::endl;
		me->use(1, *bob);
		std::cout << me->getXP(1) << std::endl;

		std::cout << "\n-- test curse XP" << std::endl;// -----
		std::cout << me->getXP(2) << std::endl;
		me->use(2, *bob);
		std::cout << me->getXP(1) << std::endl;

		delete bob;
		delete me;
		delete src;
	}
	return (0);
}