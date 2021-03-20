/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Curse.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:05:36 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/20 20:18:16 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef СURSE_HPP
# define СURSE_HPP

# include "AMateria.hpp"

class Curse : public AMateria
{
public:
	Curse() : AMateria("curse") {}
	Curse(Curse const & src);
	Curse &operator=(Curse const & src);
	virtual ~Curse() {}

	void			use(ICharacter & target);
	AMateria*		clone() const;
};

#endif