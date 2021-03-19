/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 18:23:24 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 18:36:53 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {}

	virtual int		getCount() const = 0;
	virtual ISpaceMarine*	getUnit(int unit) const = 0;

	virtual int		push(ISpaceMarine* numberUnit) = 0;
};

#endif