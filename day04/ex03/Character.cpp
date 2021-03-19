/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:14:17 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 20:12:09 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	_name = name;
	_equip = 0;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < _equip; i++)
		delete _materia[i];
}

Character::Character(Character const & src)
{
	for (int i = 0; i < src._equip; i++)
		equip(src._materia[i]->clone());
	for (int i = _equip; i < 4; i++)
		_materia[i] = NULL;
}

Character &		Character::operator=(Character const & src)
{
	_name = src._name;
	for (int i = 0; i < _equip; i++)
		delete _materia[i];
	_equip = 0;
	for (int i = 0; i < src._equip; i++)
		equip(src._materia[i]->clone());
	for (int i = _equip; i < 4; i++)
		_materia[i] = NULL;
	return (*this);
}

std::string const &		Character::getName() const
	{ return (_name); }

void Character::equip(AMateria* materia)
{
	if (!materia || _equip > 3)
		return ;
	for (int i = 0; i < _equip; i++)
		if (_materia[i] == materia)
			return ;
	_materia[_equip++] = materia;
}

void		Character::unequip(int materiaNumber)
{
	if (materiaNumber < 0 || materiaNumber > _equip || !_materia[materiaNumber])
		return ;
	for (int i = materiaNumber; i < 3; i++)
	{
		_materia[i] = _materia[i + 1];
		_materia[i + 1] = NULL;
	}
	_equip--;
}

void		Character::use(int materiaNumber, ICharacter &target)
{
	if (materiaNumber < 0 || materiaNumber >= _equip || !_materia[materiaNumber])
		return ;
	_materia[materiaNumber]->use(target);
}
