#include "ZombieHorde.hpp"

int		main()
{
	srand(time(NULL));
	ZombieHorde(4);
	std::cout << CLR_GRN"\n    By other side:\n"CLR_END;
	ZombieHorde ZH = ZombieHorde(3);
	for (int i = 3; i > 0; i--)
	{
		std::cout << "Zombies left to live " << i << " seconds\n";
		ZH.announce("Aaarghhh!!!");
		sleep(1);
	}
	return (0);
}
