/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:04:54 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/07 19:04:57 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called\n";
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
	return ;
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called\n";
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_rawBits = raw;
	return ;
}
