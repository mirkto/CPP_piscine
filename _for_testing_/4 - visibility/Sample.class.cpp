#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 42;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 21;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::publicBar(void) const
{
	std::cout << "PublicBar called" << std::endl;
	return ;
}

void	Sample::_privateBar(void) const
{
	std::cout << "_privateBar called" << std::endl;
	return ;
}
