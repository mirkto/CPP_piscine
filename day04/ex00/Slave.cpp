/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slave.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:39:50 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/15 20:39:52 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Slave.hpp"

Slave::Slave() { }

Slave::~Slave()
	{ std::cout << "AAAAAAAAAAAARRGGGHH..." << std::endl; }

Slave::Slave(std::string name) : Victim(name)
	{ std::cout << "I'm all yours without a trace!" << std::endl; }

void	Slave::getPolymorphed() const
	{ std::cout << this->_name + " has been turned into a creepy horse!" << std::endl; }
