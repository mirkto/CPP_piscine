#include "Squad.hpp"

Squad::Squad()
{
	this->_numberUnits = 0;
	this->_unit = NULL;
}

Squad::~Squad()
{
	if (_unit)
	{
		for (int i = 0; i < this->_numberUnits; i++)
			delete this->_unit[i]; // если не сделать, будут лики
		delete[] this->_unit;
	}
}

Squad::Squad(Squad const & src)
	{ *this = src; }

Squad &			Squad::operator=(Squad const & src)
{
	if (this->_unit)
	{
		for (int i = 0; i < this->_numberUnits; i++)
			delete this->_unit[i];
		delete this->_unit;
		this->_unit = NULL;
	}
	this->_numberUnits = src.getCount();
	for (int i = 0; i < this->_numberUnits; i++)
		this->push(src.getUnit(i)->clone());
	return(*this);
}

int				Squad::getCount(void) const
	{ return this->_numberUnits; }

ISpaceMarine*	Squad::getUnit(int unit) const
{
	if (unit > (this->_numberUnits - 1) || unit < 0)
	{
		std::cout << "Unit is missing!" << std::endl;
		return (NULL);
	}
	return this->_unit[unit];
}

int				Squad::push(ISpaceMarine* newUnit)
{
	if (newUnit == NULL)
	{
		std::cout << "Unit is missing!" << std::endl;
		return this->_numberUnits;
	}

	ISpaceMarine** newUnits = new ISpaceMarine*[this->_numberUnits + 1];
	for (int i = 0; i < this->_numberUnits; i++)
		newUnits[i] = this->_unit[i];
	newUnits[this->_numberUnits] = newUnit;
	if (this->_unit != NULL)
		delete[] this->_unit;
	this->_unit = newUnits;
	return (this->_numberUnits++);
}

void			Squad::rollCall() const
{
	for (int i = 0; i < this->_numberUnits; i++)
	{
		// this->_unit[i]->getName(); // хотя он есть в Некрон, не будет работать потому что нет в интерфейсе
		this->_unit[i]->battleCry();
		this->_unit[i]->meleeAttack();
		this->_unit[i]->rangedAttack();
		std::cout << std::endl;
	}
}