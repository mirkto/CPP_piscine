/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:15:52 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 19:15:55 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::string		_namesList[10] = { "Bobbi", "Rad", "Sally", "Big Stane", "Stupid Junior", "Bad Daddy Oliver", "Creepy Santa", "Mouse Sausage", "Mute Nina", "Sir Dead"};
	this->_name = _namesList[rand() % 10];

	this->_type = "Stupid Zombie";
	this->announce("Braiiiiiiinnnssss...");
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->announce("Braiiiiiiinnnssss...");
}

Zombie::Zombie(std::string name, std::string type, std::string words) : _name(name), _type(type)
{
	this->announce(words);
}

Zombie::~Zombie()
{
	std::cout << "The sun came up and the "CLR_RED << this->_name << CLR_END" burned to ashes...\n";
}

void	Zombie::announce(std::string str) const
{
	std::cout << CLR_GRN"< " << this->_name<< " "CLR_YLW"(" << this->_type << ")"CLR_GRN">"CLR_END" : " << str << std::endl;
}

void	Zombie::setType(std::string str)
{
	this->_type = str;
}
