#include "Peon.hpp"

Peon::Peon() { }

Peon::~Peon()
	{ std::cout << "Bleuark..." << std::endl; }

Peon::Peon(std::string name) : Victim(name)
	{ std::cout << "Zog zog." << std::endl; }

void	Peon::getPolymorphed() const
	{ std::cout << this->_name + " has been turned into a pink pony!" << std::endl; }
