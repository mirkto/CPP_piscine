/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:05:08 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/07 19:05:10 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_rawBits;
	static int const	_shift = 8;

public:
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif