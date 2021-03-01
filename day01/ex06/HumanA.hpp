/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:35:32 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 16:35:33 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class humanA
{
private:
	std::string		_name;
	Weapon			*_inHand;

public:
	humanA();
	humanA(std::string name, Weapon &newWeapon);
	~humanA();

	void			attack() const;
};

#endif
