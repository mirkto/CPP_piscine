/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:52:51 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 18:37:13 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}

	virtual ISpaceMarine*	clone() const = 0;
	virtual void	battleCry() const = 0;
	virtual void	rangedAttack() const = 0;
	virtual void	meleeAttack() const = 0;
};

#endif