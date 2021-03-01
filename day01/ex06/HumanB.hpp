/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:35:56 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 16:35:57 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class humanB
{
private:
	std::string		_name;
	Weapon			*_inHand;

public:
	humanB();
	humanB(std::string name);
	~humanB();

	void		attack() const;
	void		setWeapon(Weapon &newWeapon);
};

#endif
