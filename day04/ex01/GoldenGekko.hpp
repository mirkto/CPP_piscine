/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GoldenGekko.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:57:21 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 16:57:23 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOLDENGEKKO_HPP
# define GOLDENGEKKO_HPP

#include "Enemy.hpp"

class GoldenGekko : public Enemy
{

public:
	GoldenGekko();
	GoldenGekko(GoldenGekko const & src);
	GoldenGekko &	operator=(GoldenGekko const & src);
	virtual ~GoldenGekko();
	
	virtual void	takeDamage(int damage);
};

#endif