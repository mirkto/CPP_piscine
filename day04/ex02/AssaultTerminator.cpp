#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
	{ std::cout << "* teleports from space *" << std::endl; }

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
	{ std::cout << "I’ll be back..." << std::endl; }

AssaultTerminator &	AssaultTerminator::operator=(AssaultTerminator const & src)
{
	(void)src;
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	AssaultTerminator *src = new AssaultTerminator(*this);
	return (src);
}

void	AssaultTerminator::battleCry() const
	{ std::cout << "This code is unclean. PURIFY IT!" << std::endl; }

void	AssaultTerminator::rangedAttack() const
	{ std::cout <<  "* does nothing *" << std::endl; }

void	AssaultTerminator::meleeAttack() const
	{ std::cout << "* attacks with chainfists *" << std::endl; }
