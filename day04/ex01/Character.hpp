/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:57:26 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/17 20:57:27 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string		_name;
	int				_AP;
	AWeapon*		_weapon;
	Character();
	
public:
	Character(std::string const & name);
	Character(Character const & src);
	Character &		operator=(Character const & src);
	virtual ~Character();

	std::string const &	getName() const;//std::string	getName() const;
	int					getAP() const;
	AWeapon*	getWeaponInfo() const;

	void	recoverAP();
	void	equip(AWeapon* weapon);
	void	attack(Enemy* enemy);
};

std::ostream &		operator<<(std::ostream & out, Character const & src);

#endif