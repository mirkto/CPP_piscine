/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:26:49 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/18 18:26:51 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{

public:
	RadScorpion();
	RadScorpion(RadScorpion const & src);
	RadScorpion &	operator=(RadScorpion const & src);
	virtual ~RadScorpion();
	
	virtual void	takeDamage(int damage);
};

#endif