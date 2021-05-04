#include "Slave.hpp"

Slave::Slave() { }

Slave::~Slave()
	{ std::cout << "AAAAAAAAAAAARRGGGHH..." << std::endl; }

Slave::Slave(std::string name) : Victim(name)
	{ std::cout << "I'm all yours without a trace!" << std::endl; }

void	Slave::getPolymorphed() const
	{ std::cout << this->_name + " has been turned into a creepy horse!" << std::endl; }
