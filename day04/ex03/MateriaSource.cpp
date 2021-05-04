#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_volume = 0;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _volume; i++)
		delete this->_materia[i];
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	this->_volume = 0;
	for (int i = 0; i < src._volume; i++)
		learnMateria(src._materia[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
		delete this->_materia[i];
	this->_volume = 0;
	for (int i = 0; i < src._volume; i++)
		learnMateria(src._materia[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_volume > 3 || !materia)
		return ;
	for (int i = 0; i < this->_volume; i++)
		if (this->_materia[i] == materia)
			return ;
	this->_materia[this->_volume] = materia;
	this->_volume++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_volume; i++)
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	return (NULL);
}
