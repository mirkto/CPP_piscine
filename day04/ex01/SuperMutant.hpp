/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:59:10 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/17 20:59:11 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:
	SuperMutant();
	SuperMutant(SuperMutant const & src);
	SuperMutant &	operator=(SuperMutant const & src);
	virtual ~SuperMutant();
	
	virtual void	takeDamage(int damage);
};

#endif