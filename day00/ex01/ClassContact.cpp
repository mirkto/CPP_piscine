#include "ClassContact.hpp"

classContact::classContact(void)
{
	std::cout << "Constructor called" << std::endl;
	for (int i = 0; i < 11; i++)
		this->setField(i, "empty");
	this->setInf(0, "First name: ");
	this->setInf(1, "Last name: ");
	this->setInf(2, "Nickname: ");
	this->setInf(3, "Login: ");
	this->setInf(4, "Postal address: ");
	this->setInf(5, "Email address: ");
	this->setInf(6, "Phone number: ");
	this->setInf(7, "Birthday date: ");
	this->setInf(8, "Favorite meal: ");
	this->setInf(9, "Underwear color: ");
	this->setInf(10, "Darkest secret: ");
	return ;
}

classContact::~classContact()
{
	std::cout << "Contact destructor called" << std::endl;
	return ;
}

void			classContact::setField(int ind, std::string str)
{
	this->contact[ind] = str;
	return ;
}

void			classContact::setInf(int ind, std::string str)
{
	this->inf[ind] = str;
	return ;
}

std::string		classContact::getField(int ind)
{
	return 	this->contact[ind];
}

std::string		classContact::getInf(int ind)
{
	return 	this->inf[ind];
}

std::string		classContact::getInfField(int ind)
{
	return 	this->inf[ind] + this->contact[ind];
}
