#include "Pony.hpp"

classPony::classPony()
{
	std::cout << "Constructor called\n";
	this->_add_info("Enter pony name: ");
	this->_add_info("Enter pony color: ");
	this->_add_info("Enter pony breed: ");
	std::cout << "Create from default constructor\n";
	return ;
}

classPony::classPony(std::string name, std::string color, std::string breed) : _name(name), _color(color), _breed(breed)
{
	std::cout << "Constructor called from the init list\n";
	return ;
}

classPony::~classPony()
{
	std::cout << "Destructor called\n";
	return ;
}

void	classPony::_add_info(std::string str)
{
	std::string		tmp;

	std::cout << str;
	std::getline(std::cin, tmp, '\n');

	if (str.find("name") != std::string::npos)
		this->_name = tmp;
	else if (str.find("color") != std::string::npos)
		this->_color = tmp;
	else if (str.find("breed") != std::string::npos)
		this->_breed = tmp;
	else
		std::cout << "Wrong parameter\n";
	return ;
}

void	classPony::printInfo() const
{
	std::cout << "	Pony name is " << this->_name << std::endl;
	std::cout << "	Pony color is " << this->_color << std::endl;
	std::cout << "	Pony breed is " << this->_breed << std::endl;
}