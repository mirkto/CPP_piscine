/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:57:02 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/17 20:57:03 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
protected:
	std::string		_name;
	int				_apcost;
	int				_damage;
	AWeapon();

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & src);
	AWeapon &	operator=(AWeapon const & src);
	virtual ~AWeapon();

	std::string const &	getName() const;//std::string	getName() const;
	int		getAPCost() const;
	int		getDamage() const;
	
	virtual void	attack() const = 0;
};

#endif
