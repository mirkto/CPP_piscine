/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:26:50 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/22 19:52:21 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>

class Conversion
{
private:
	std::string		_inputStr;
	double			_toDouble;
	float			_toFloat;
	int				_toInt;
	char			_toChar;
	Conversion() {}

public:
	Conversion(int argc, char **argv);
	Conversion(Conversion const & src);
	virtual ~Conversion() {}
	Conversion &	operator=(Conversion const & src);
};

#endif