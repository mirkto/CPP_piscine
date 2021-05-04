#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Magnum.hpp"
#include "GoldenGekko.hpp"

int			main()
{
	std::cout << CLR_YLW"\n---subject main---"CLR_END << std::endl;
	// subject main -----
	{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete me;
	delete pr;
	delete pf;
	}
	// additional main -----
	std::cout << CLR_YLW"\n--- additional main #1 test new enemy and weapon ---"CLR_END << std::endl;
	{
	Character* hero = new Character("Tony");
	std::cout << *hero;
	AWeapon* weapon = new Magnum();
	hero->equip(weapon);
	Enemy* enemy = new GoldenGekko();
	Enemy* enemy2 = new SuperMutant();
	std::cout << *hero;
	hero->attack(enemy);
	std::cout << *hero;
	hero->attack(enemy);
	std::cout << *hero;
	hero->attack(enemy2);
	std::cout << *hero;
	hero->attack(enemy2);
	std::cout << *hero;

	delete enemy2;
	delete hero;
	delete weapon;
	}
	return 0;
}
