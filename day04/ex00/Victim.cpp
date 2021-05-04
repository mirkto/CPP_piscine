#include "Victim.hpp"

Victim::Victim() { this->_name = "default"; }

Victim::~Victim()
	{ std::cout << "Victim " << this->_name + " just died for no apparent reason!" << std::endl; }

Victim::Victim(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name + " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
	std::cout << "Copy Victim class is complete!" << std::endl;
	*this = src;
}

Victim &	Victim::operator=(Victim const & src)
{
	this->_name = src._name;
	return *this;
}

void	Victim::getPolymorphed() const
	{ std::cout << this->_name + " has been turned into a cute little sheep!" << std::endl; }

std::string		Victim::introduce() const
	{ return "I'm " + this->_name  + " and I like otters!\n"; }

std::ostream &	operator<<(std::ostream & out , Victim const & src)
	{ return out << src.introduce(); }
