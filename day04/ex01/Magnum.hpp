/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Magnum.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:47:58 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 16:50:21 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAGNUM_HPP
# define MAGNUM_HPP

# include "AWeapon.hpp"

class Magnum : public AWeapon
{

public:
	Magnum();
	Magnum(Magnum const & src);
	Magnum &	operator=(Magnum const & src);
	virtual ~Magnum();
	
	virtual void	attack() const;
};

#endif