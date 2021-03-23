/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:07:28 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/23 19:37:50 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serialization::Serialization()
{
	this->_data = new Data;
	this->_data->int1 = 0;
	this->_data->str1 = "";
	this->_data->str2 = "";
	this->_raw = serialize();
	deserialize(this->_raw);
	std::cout << "\nFirst string	: " << this->_data->str1 << std::endl;
	std::cout << "Integer		: " << this->_data->int1 << std::endl;
	std::cout << "Second string	: " << this->_data->str2 << "\n" << std::endl;
}

Serialization::Serialization( const Serialization & src )
	{ *this = src; }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serialization::~Serialization()
{
	delete this->_data;
	// delete this->_raw;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Serialization &				Serialization::operator=( Serialization const & rhs )
{
	if ( this != &rhs )
	{
		this->_data = rhs._data;
		this->_raw = rhs._raw;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string		Serialization::randStr()
{
	std::string		str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";// 26
	std::string		str2 = "aeiouy";					// 6
	std::string		str3 = "bcdfghjklmnpqrstvwxyz";	//21
	char			tmp[9];
	
	tmp[0] = str1[rand() % 26];
	for (int i = 1; i < 8; i += 2)
		tmp[i] = str2[rand() % 6];
	for (int i = 2; i < 8; i += 2)
		tmp[i] = str3[rand() % 21];
	tmp[8] = '\0';
	return std::string(tmp);
}

void *					Serialization::serialize(void)
{
	srand(time(NULL));
	std::string		str1 = randStr();
	std::string		str2 = randStr();
	int				int1 = rand() % 100;
	int				sizeStr1 = sizeof(str1);
	int				sizeStr2 = sizeof(str2);
	int				sizeInt1 = sizeof(int1);
	char			*tmp = new char[sizeStr1 + sizeStr2 + sizeInt1];
	memcpy(static_cast<void *>(tmp), static_cast<void *>(&str1), sizeStr1);
	memcpy(static_cast<void *>(tmp + sizeStr1), static_cast<void *>(&int1), sizeInt1);
	memcpy(static_cast<void *>(tmp + sizeStr1 + sizeInt1), static_cast<void *>(&str2), sizeStr2);
	return static_cast<void *>(tmp);
}

Data *					Serialization::deserialize(void * raw)
{
	char *tmp = reinterpret_cast<char *>(raw);

	this->_data->str1 = *(reinterpret_cast<std::string *>(tmp));
	tmp += sizeof(std::string);
	this->_data->int1 = *(reinterpret_cast<int *>(tmp));
	tmp += sizeof(int);
	this->_data->str2 = *(reinterpret_cast<std::string *>(tmp));
	return (0);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */