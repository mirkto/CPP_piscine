/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:52:55 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/19 19:02:27 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	_numberUnits = 0;
	_unit = NULL;
}

Squad::~Squad()
{
	if (_unit)
	{
		for (int i = 0; i < _numberUnits; i++)
			delete _unit[i];
		delete[] _unit;
	}
}

Squad::Squad(const Squad &src)
{
	_numberUnits = 0;
	_unit = NULL;
	for(int i = 0; i < src.getCount(); i++)
		push(src.getUnit(i)->clone());
}

Squad &Squad::operator=(const Squad &src)
{
	if (_unit)
	{
		for (int i = 0; i < _numberUnits; i++)
			delete _unit[i];
		delete _unit;
		_unit = NULL;
	}
	_numberUnits = 0;
	for (int i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
	return(*this);
}

int	Squad::getCount(void) const
	{ return (_numberUnits); }

ISpaceMarine* Squad::getUnit(int unit) const
{
	if (unit > (_numberUnits - 1) || unit < 0)
		return (NULL);
	return (_unit[unit]);
}

int Squad::push(ISpaceMarine* numberUnits)
{
	int i;
	ISpaceMarine** newUnits = new ISpaceMarine*[_numberUnits + 1];

	for (i = 0; i < _numberUnits; i++)
		newUnits[i] = _unit[i];
	newUnits[i] = numberUnits;
	if (_unit != NULL)
		delete[] _unit;
	_unit = newUnits;
	return (_numberUnits++);
}