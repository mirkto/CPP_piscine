/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:26 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 20:10:08 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice() : AMateria("ice") {}
	Ice(Ice const & src);
	Ice &operator=(Ice const & src);
	virtual ~Ice() {}

	void			use(ICharacter & target);
	AMateria*		clone() const;
};

#endif