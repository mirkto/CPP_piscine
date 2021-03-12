/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:14:48 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/12 17:14:49 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define COUT_INFO(name, what) std::cout << CLR_YLW">> "CLR_END << name << " has " << what << std::endl
#define TARGET CLR_RED"Dummy"CLR_END
#define HEAL 75
#define DAMAGE 100
#define LINE CLR_WHT_U"\n-------------------------------------------\n"CLR_END

int		main()
{
	{
		FragTrap	robot("Tor");
		srand(time(NULL));

			std::cout << LINE;//----- testing attacks
		robot.meleeAttack(TARGET);
		robot.rangedAttack(TARGET);

			std::cout << LINE;//----- testing armor and heal
		COUT_INFO(robot.getName(), robot.getHP() + " Hit Points");
		for (int i = 0; i < 3; i++) {
			robot.takeDamage(DAMAGE * i + rand() % 6);
			COUT_INFO(robot.getName(), robot.getHP() + " Hit Points"); }
		robot.beRepaired(HEAL);
		COUT_INFO(robot.getName(), robot.getHP() + " Hit Points");
		robot.beRepaired(HEAL * 2);
		COUT_INFO(robot.getName(), robot.getHP() + " Hit Points");

			std::cout << LINE;//----- testing special move
		COUT_INFO(robot.getName(), robot.getEP() + " Enegry");
		for (int i = 0; i < 5; i++) {
			robot.vaulthunter_dot_exe(TARGET);
			COUT_INFO(robot.getName(), robot.getEP() + " Enegry"); }
	}
	{
		ScavTrap	robot("Evil Rad");
		srand(time(NULL));

			std::cout << LINE;//----- testing attacks
		robot.meleeAttack(TARGET);
		robot.rangedAttack(TARGET);

			std::cout << LINE;//----- testing armor and heal
		COUT_INFO(robot.getName(), robot.getHP() + " Hit Points");
		for (int i = 0; i < 3; i++) {
			robot.takeDamage(DAMAGE * i + rand() % 6);
			COUT_INFO(robot.getName(), robot.getHP() + " Hit Points"); }
		robot.beRepaired(HEAL);
		COUT_INFO(robot.getName(), robot.getHP() + " Hit Points");
		robot.beRepaired(HEAL * 2);
		COUT_INFO(robot.getName(), robot.getHP() + " Hit Points");

			std::cout << LINE;//----- testing special move
		COUT_INFO(robot.getName(), robot.getEP() + " Enegry");
		for (int i = 0; i < 5; i++) {
			robot.challengeNewcomer(TARGET);
			COUT_INFO(robot.getName(), robot.getEP() + " Enegry"); }
	}
	return (0);
}
