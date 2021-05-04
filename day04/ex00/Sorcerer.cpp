#include "Sorcerer.hpp"

Sorcerer::Sorcerer() { }

Sorcerer::~Sorcerer()
	{ std::cout << this->_name + ", " + this->_title + ", is dead. Consequences will never be the same!" << std::endl; }

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name + ", " + this->_title + ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	std::cout << "Copy Sorcerer class is complete!" << std::endl;
	*this = src;
}

Sorcerer &		Sorcerer::operator=(Sorcerer const & src)
{
	this->_name = src._name;
	this->_title = src._title;
	return *this;
}

std::string		Sorcerer::introduce() const
	{ return "I am " + this->_name + ", " + this->_title + ", and I like ponies!\n"; }

void			Sorcerer::polymorph(Victim const & src) const
	{ src.getPolymorphed(); }

std::ostream &	operator<<(std::ostream & out , Sorcerer const & src)
	{ return out << src.introduce(); }
