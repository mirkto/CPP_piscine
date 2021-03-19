/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:52:57 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 19:09:45 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

class Squad : public ISquad
{
private:
	int				_numberUnits;
	ISpaceMarine	**_unit;

public:
	Squad();
	Squad(Squad const & src);
	Squad &		operator=(Squad const & src);

	virtual ~Squad();

	virtual int		getCount(void) const;
	virtual ISpaceMarine*	getUnit(int unit) const;

	virtual int		push(ISpaceMarine* numberUnits);
};

#endif