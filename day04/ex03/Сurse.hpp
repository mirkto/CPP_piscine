/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Сurse.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:05:36 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/20 19:09:51 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef СURSE_HPP
# define СURSE_HPP

# include "AMateria.hpp"

class Сurse : public AMateria
{
public:
	Сurse() : AMateria("curse") {}
	Сurse(Сurse const & src);
	Сurse &operator=(Сurse const & src);
	virtual ~Сurse() {}

	void			use(ICharacter & target);
	AMateria*		clone() const;
};

#endif