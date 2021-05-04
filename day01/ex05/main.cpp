#include "Human.hpp"

int		main()
{
	Human	bob;
	std::cout << "\033[0;32m""Test Bob:\n""\033[0m";
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	
	Human	carl;
	std::cout << "\033[0;32m""\nTest Carl:\n""\033[0m";
	std::cout << carl.identify() << std::endl;
	std::cout << carl.getBrain().identify() << std::endl;

	return (0);
}
