/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:10:06 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 17:10:08 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

Human::Human()
{
	_BrainPtr = new Brain();
}

Human::~Human()
{
	delete _BrainPtr;
}

std::string	Human::identify()
{
	return (this->_Brain.identify());
}

Brain	Human::getBrain()
{
	return (this->_Brain);
}

std::string	Human::identifyPtr()
{
	return (this->_BrainPtr->identify());
}

Brain	&Human::getBrainPtr()
{
	return (*this->_BrainPtr);
}
