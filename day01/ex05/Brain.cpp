/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:11:42 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 18:11:43 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::stringstream	tmp;

	tmp << this;
	this->_adr = tmp.str();
}

Brain::~Brain()
{
}

std::string		Brain::identify()
{
	return (this->_adr);
}
