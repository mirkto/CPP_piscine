/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:23 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/20 19:09:45 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure() : AMateria("cure") {}
	Cure(Cure const & src);
	Cure &operator=(Cure const & src);
	virtual ~Cure() {}

	void			use(ICharacter & target);
	AMateria*		clone() const;
};

#endif