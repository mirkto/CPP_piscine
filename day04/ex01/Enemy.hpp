/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:57:48 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/17 20:57:49 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
protected:
	std::string		_type;
	int				_hp;
	Enemy();

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	Enemy &		operator=(Enemy const & src);
	virtual ~Enemy();

	std::string const &	getType() const;//std::string	getName() const;
	int					getHP() const;

	virtual void	takeDamage(int damage);
};

#endif
