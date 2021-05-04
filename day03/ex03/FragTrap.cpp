#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 100, 100, 1, 30, 20, 5, "FragTrap") 
	{ std::cout << "\n The creation of the robot " << this->getName() << " is complete!\n"; }

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5, "FragTrap") 
	{ std::cout << "\n The creation of the robot " << this->getName() << " is complete!\n"; }

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	*this = src;

	std::cout << "Copy " << this->getName() << " is complete!\n";
	return ;
}

FragTrap::~FragTrap()
	{ std::cout << "\nBye-bye " << this->getName() << "!\n"; }

FragTrap &		FragTrap::operator=(FragTrap const & src)
{
	std::cout << "The assignment " << this->getName() << " is complete!\n";
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

	// Special move
void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::cout << this->getName() << " use special move against " << target << "!\n";
	if (this->_energyPoints < 25)
		std::cout << "Not enough energy for use special move!\n";
	else
	{
		this->_energyPoints -= 25;
		int i = rand() % 5;
		if (i == 0)
			std::cout << "<" << i <<"> " << "Attack hits exactly the " << target << " and destroys it!\n";
		if (i == 1)
			std::cout << "<" << i <<"> " << target << " heroically dodges the attack!!\n";
		if (i == 2)
			std::cout << "<" << i <<"> " << "Attack is passing by...\n";
		if (i == 3)
			std::cout << "<" << i <<"> " << "Attack hit the " << target << " target, but did not kill.\n";
		if (i == 4)
			std::cout << "<" << i <<"> " << "Ora-ora-ora-ora-ora!!\n";
	}
	return ;
}
