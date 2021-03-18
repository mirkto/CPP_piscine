/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:58:53 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/17 20:58:54 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

public:
	PowerFist();
	PowerFist(PowerFist const & src);
	PowerFist &	operator=(PowerFist const & src);
	virtual ~PowerFist();
	
	virtual void	attack() const;
};

#endif
