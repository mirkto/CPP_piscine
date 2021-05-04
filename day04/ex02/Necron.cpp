#include "Necron.hpp"

Necron::Necron()
	{ std::cout << "We have awakened from eternal sleep!" << std::endl; }

Necron::Necron(std::string name) : _name(name)
	{ std::cout << this->_name + " have awakened from eternal sleep!" << std::endl; }

Necron::Necron(Necron const & src)
{
	*this = src;
	std::cout << "We have awakened from eternal sleep!" << std::endl;
}

Necron::~Necron()
	{ std::cout << this->_name + ": What Is Dead May Never Die..." << std::endl; }

Necron &	Necron::operator=(Necron const & src)
{
	this->_name = src._name;
	return (*this);
}

ISpaceMarine*	Necron::clone() const
{
	Necron *src = new Necron(*this);
	return (src);
}

void	Necron::battleCry() const
	{ std::cout << this->_name + ": For Phaeron!!! " << std::endl; }

void	Necron::rangedAttack() const
	{ std::cout << this->_name + ": * blaster attack *" << std::endl; }

void	Necron::meleeAttack() const
	{ std::cout << this->_name + ": * rifle ax attack *" << std::endl; }

std::string				Necron::getName() const
	{ return this->_name; }