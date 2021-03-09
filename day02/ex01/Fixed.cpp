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

#define POW_2_TO_8	256
// pow(2, Fixed::_shift);
	// int		ft_pow = 1;
	// for (int i = Fixed::_shift; i > 0; i--)
	// 	ft_pow *= 2;
// 2 ^ Fixed::_shift = 256;

int const Fixed::_shift = 8;

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

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called\n";

	// this->_rawBits = num * POW_2_TO_8;
	this->_rawBits = num << Fixed::_shift;
	return ;
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called\n";

	// this->_rawBits = roundf(num * POW_2_TO_8);
	int		integer_part = (int)num << Fixed::_shift;
	float	fraction_part = (num - (int)num) * (1 << Fixed::_shift);
	this->_rawBits = roundf(integer_part + fraction_part);
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
	// std::cout << "getRawBits member function called\n";
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called\n";
	this->_rawBits = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	// return (float)this->_rawBits / POW_2_TO_8;
	return (float)this->_rawBits / (1 << Fixed::_shift);
}

int		Fixed::toInt(void) const
{
	// return this->_rawBits / POW_2_TO_8;
	return this->_rawBits >> Fixed::_shift;
}

std::ostream	&	operator<<(std::ostream & out, Fixed const & rhs )
{
	out << rhs.toFloat();
	return out;
}
