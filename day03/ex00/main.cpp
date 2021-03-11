#include "FragTrap.hpp"

int		main()
{
	FragTrap	robot("Tor");

		std::cout << std::endl;//-----

	robot.meleeAttack("dummy");
	robot.rangedAttack("dummy");

		std::cout << std::endl;//-----

	std::cout << robot.getEP();
	robot.vaulthunter_dot_exe("dummy");
	std::cout << robot.getEP();

		std::cout << std::endl;//-----

	std::cout << robot.getHP();
	robot.takeDamage(50);
	std::cout << robot.getHP();
	robot.beRepaired(60);
	std::cout << robot.getHP();
	return (0);
}