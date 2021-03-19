/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:52:48 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 19:09:12 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR__HPP
# define ASSAULTTERMINATOR__HPP

# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & src);
	AssaultTerminator &		operator=(AssaultTerminator const  & src);
	virtual ~AssaultTerminator();

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};

#endif