/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:16 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/20 20:01:53 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria;
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
	unsigned int	_xp;
	std::string		_type;

public:
	AMateria() {}
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	AMateria &	operator=(AMateria const & src);
	virtual ~AMateria() {}

	std::string const &		getType() const; //Returns the materia type
	virtual unsigned int	getXP() const; //Returns the Materia's XP

	virtual AMateria*		clone() const = 0;
	virtual void			use(ICharacter& target);
};

#endif