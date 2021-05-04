#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

#define COUT_INFO(name, what) std::cout << CLR_YLW">> "CLR_END << name << " has " << what << std::endl
#define TARGET CLR_RED"Dummy"CLR_END
#define HEAL 75
#define DAMAGE 100
#define LINE CLR_WHT_U"\n-------------------------------------------\n"CLR_END
#define NEWTEST CLR_PRP"\n-------------------------------------------\n"CLR_END

int		main()
{
// 	std::cout << NEWTEST;
	FragTrap	robot1("Tor");
// 	srand(time(NULL));

// 		std::cout << LINE;//----- testing attacks
// 	robot1.meleeAttack(TARGET);
// 	robot1.rangedAttack(TARGET);

// 		std::cout << LINE;//----- testing armor and heal
// 	COUT_INFO(robot1.getName(), robot1.getHP() + " Hit Points");
// 	for (int i = 0; i < 3; i++) {
// 		robot1.takeDamage(DAMAGE * i + rand() % 6);
// 		COUT_INFO(robot1.getName(), robot1.getHP() + " Hit Points"); }
// 	robot1.beRepaired(HEAL);
// 	COUT_INFO(robot1.getName(), robot1.getHP() + " Hit Points");
// 	robot1.beRepaired(HEAL * 2);
// 	COUT_INFO(robot1.getName(), robot1.getHP() + " Hit Points");

// 		std::cout << LINE;//----- testing special move
// 	COUT_INFO(robot1.getName(), robot1.getEP() + " Enegry");
// 	for (int i = 0; i < 5; i++) {
// 		robot1.vaulthunter_dot_exe(TARGET);
// 		COUT_INFO(robot1.getName(), robot1.getEP() + " Enegry"); }
// // -------------------------------------------------------------------
// 	std::cout << NEWTEST;
	ScavTrap	robot2("Evil Rad");

// 		std::cout << LINE;//----- testing attacks
// 	robot2.meleeAttack(TARGET);
// 	robot2.rangedAttack(TARGET);

// 		std::cout << LINE;//----- testing armor and heal
// 	COUT_INFO(robot2.getName(), robot2.getHP() + " Hit Points");
// 	for (int i = 0; i < 3; i++) {
// 		robot2.takeDamage(DAMAGE * i + rand() % 6);
// 		COUT_INFO(robot2.getName(), robot2.getHP() + " Hit Points"); }
// 	robot2.beRepaired(HEAL);
// 	COUT_INFO(robot2.getName(), robot2.getHP() + " Hit Points");
// 	robot2.beRepaired(HEAL * 2);
// 	COUT_INFO(robot2.getName(), robot2.getHP() + " Hit Points");

// 		std::cout << LINE;//----- testing special move
// 	COUT_INFO(robot2.getName(), robot2.getEP() + " Enegry");
// 	for (int i = 0; i < 3; i++) {
// 		robot2.challengeNewcomer(TARGET);
// 		COUT_INFO(robot2.getName(), robot2.getEP() + " Enegry"); }
// // -------------------------------------------------------------------
// 	std::cout << NEWTEST;
	NinjaTrap	robot3("Kagenoske");
	ClapTrap	robot("Pupe");

// 		std::cout << LINE;//----- testing attacks
// 	robot3.meleeAttack(TARGET);
// 	robot3.rangedAttack(TARGET);

// 		std::cout << LINE;//----- testing armor and heal
// 	COUT_INFO(robot3.getName(), robot3.getHP() + " Hit Points");
// 	for (int i = 0; i < 3; i++) {
// 		robot3.takeDamage(DAMAGE * i + rand() % 6);
// 		COUT_INFO(robot3.getName(), robot3.getHP() + " Hit Points"); }
// 	robot3.beRepaired(HEAL);
// 	COUT_INFO(robot3.getName(), robot3.getHP() + " Hit Points");
// 	robot3.beRepaired(HEAL * 2);
// 	COUT_INFO(robot3.getName(), robot3.getHP() + " Hit Points");

// 		std::cout << LINE;//----- testing special move
// 	robot3.ninjaShoebox(robot1);
// 	robot3.ninjaShoebox(robot2);
// 	robot3.ninjaShoebox(robot3);
// 	robot3.ninjaShoebox(robot);
// -------------------------------------------------------------------
	std::cout << NEWTEST;
	SuperTrap	robot4("Kobra");

		std::cout << LINE;//----- testing attacks
	robot4.meleeAttack(TARGET);
	robot4.rangedAttack(TARGET);

		std::cout << LINE;//----- testing armor and heal
	COUT_INFO(robot4.getName(), robot4.getHP() + " Hit Points");
	for (int i = 0; i < 3; i++) {
		robot4.takeDamage(DAMAGE * i + rand() % 6);
		COUT_INFO(robot4.getName(), robot4.getHP() + " Hit Points"); }
	robot4.beRepaired(HEAL);
	COUT_INFO(robot4.getName(), robot4.getHP() + " Hit Points");
	robot4.beRepaired(HEAL * 2);
	COUT_INFO(robot4.getName(), robot4.getHP() + " Hit Points");
			std::cout << LINE;//----- testing special move FragTrap
	COUT_INFO(robot4.getName(), robot4.getEP() + " Enegry");
	for (int i = 0; i < 5; i++) {
		robot4.vaulthunter_dot_exe(TARGET);
	COUT_INFO(robot4.getName(), robot4.getEP() + " Enegry"); }
		std::cout << LINE;//----- testing special move NinjaTrap
	robot4.ninjaShoebox(robot1);
	robot4.ninjaShoebox(robot2);
	robot4.ninjaShoebox(robot3);
	robot4.ninjaShoebox(robot);
	std::cout << NEWTEST;
	return (0);
}
