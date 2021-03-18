/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:39:50 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/15 20:39:52 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() { }

Peon::~Peon()
	{ std::cout << "Bleuark..." << std::endl; }

Peon::Peon(std::string name) : Victim(name)
	{ std::cout << "Zog zog." << std::endl; }

void	Peon::getPolymorphed() const
	{ std::cout << this->_name + " has been turned into a pink pony!" << std::endl; }
