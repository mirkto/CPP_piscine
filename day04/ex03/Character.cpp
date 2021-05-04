#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->_name = name;
	this->_equip = 0;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < this->_equip; i++)
		delete this->_materia[i];
}

Character::Character(Character const & src)
{
	for (int i = 0; i < src._equip; i++)
		equip(src._materia[i]->clone());
	for (int i = this->_equip; i < 4; i++)
		this->_materia[i] = NULL;
}

Character &		Character::operator=(Character const & src)
{
	this->_name = src._name;
	for (int i = 0; i < this->_equip; i++)
		delete this->_materia[i];
	this->_equip = 0;
	for (int i = 0; i < src._equip; i++)
		equip(src._materia[i]->clone());
	for (int i = _equip; i < 4; i++)
		this->_materia[i] = NULL;
	return (*this);
}

std::string const &		Character::getName() const
	{ return this->_name; }

void Character::equip(AMateria* materia)
{
	if (!materia)
		std::cout << "! empty matter !" << std::endl;
	else if (this->_equip > 3)
		std::cout << "! no free slots !" << std::endl;
	else 
	{
		for (int i = 0; i < this->_equip; i++)
			if (this->_materia[i] == materia)
				return ;
		this->_materia[this->_equip] = materia;
		this->_equip++;
	}
}

void		Character::unequip(int materiaNumber)
{
	if (materiaNumber < 0 || materiaNumber > this->_equip || !this->_materia[materiaNumber])
		return ;
	for (int i = materiaNumber; i < 3; i++)
	{
		this->_materia[i] = this->_materia[i + 1];
		this->_materia[i + 1] = NULL;
	}
	this->_equip--;
}

void		Character::use(int materiaNumber, ICharacter &target)
{
	if (materiaNumber < 0 || materiaNumber >= this->_equip || !this->_materia[materiaNumber])
		return ;
	this->_materia[materiaNumber]->use(target);
}

unsigned int		Character::getXP(int materiaNumber) const
	{ return this->_materia[materiaNumber]->getXP(); }
