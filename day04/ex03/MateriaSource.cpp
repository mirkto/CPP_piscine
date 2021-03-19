/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:35 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 19:56:07 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_volume = 0;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _volume; i++)
		delete _materia[i];
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	_volume = 0;
	for (int i = 0; i < src._volume; i++)
		learnMateria(src._materia[i]->clone());
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
	_volume = 0;
	for (int i = 0; i < src._volume; i++)
		learnMateria(src._materia[i]->clone());
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_volume > 3 || !materia)
		return ;
	for (int i = 0; i < _volume; i++)
		if (_materia[i] == materia)
			return ;
	_materia[_volume++] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _volume; i++)
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	return (NULL);
}
