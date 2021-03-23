/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:38:55 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/23 14:56:14 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "\033[0;31m -- incorrect unput -- \033[0m\nuse: ./conversion variable(char, int, float, double)" << std::endl;
		return ;
	}
	this->_inputStr = std::string(argv[1]);
	this->_toDouble = atof(argv[1]);
	if ((this->_inputStr.length() != 1) && (this->_toDouble == 0))
	{
		std::cout << "\033[0;31m -- incorrect unput -- \033[0m\nOnly the decimal notation will be used." << std::endl;
		return ;
	}
	if (this->_toDouble == 0)
		this->_toDouble = static_cast<char>(argv[1][0]);
	this->_toFloat = static_cast<float>(this->_toDouble);
	this->_toInt = static_cast<int>(this->_toDouble);
	this->_toChar = static_cast<char>(this->_toDouble);
		// --- print char
	if (this->_toChar >= 32 && this->_toChar <= 126)
		std::cout << "char: '" << this->_toChar << "'" << std::endl;
	else if (this->_inputStr == "nan" or this->_inputStr == "-inf" or this->_inputStr == "inf" or\
			this->_inputStr == "+inf" or this->_inputStr == "-inff" or this->_inputStr == "+inff")
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
		// --- print int
	// if (this->_toInt >= -2147483647 && this->_toInt <= 2147483647)
	if (this->_toInt > INT_MIN && this->_toInt <= INT_MAX)
		std::cout << "int: " << this->_toInt << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
		// --- print float and double
	if (this->_toFloat - this->_toInt == 0)
	{
		std::cout << "float: " << this->_toFloat << ".0f" << std::endl;
		std::cout << "double: " << this->_toDouble << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << this->_toFloat << "f" << std::endl;
		std::cout << "double: " << this->_toDouble << std::endl;
	}
}

Conversion::Conversion(Conversion const & src)
	{ *this = src; }

Conversion &	Conversion::operator=(Conversion const & src)
{
	this->_inputStr = src._inputStr;
	this->_toDouble = src._toDouble;
	this->_toFloat = src._toFloat;
	this->_toInt = src._toInt;
	this->_toChar = src._toChar;
	return *this;
}
