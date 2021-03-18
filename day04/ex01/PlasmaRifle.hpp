/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:58:26 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/17 20:58:28 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & src);
	PlasmaRifle &	operator=(PlasmaRifle const & src);
	virtual ~PlasmaRifle();
	
	virtual void	attack() const;
};

#endif
