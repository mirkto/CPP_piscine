/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:37 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 20:12:50 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
private:
	int				_volume;
	AMateria		*_materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	MateriaSource &		operator=(MateriaSource const & src);
	virtual ~MateriaSource();

	void			learnMateria(AMateria* materia);
	AMateria*		createMateria(std::string const & type);
};

#endif