#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num)
{
	this->_number = num;
	this->_horde = new Zombie[num];
}

ZombieHorde::~ZombieHorde()
{
	delete [] _horde;
}

void	ZombieHorde::announce(std::string words) const
{
	for (int i = 0; i < this->_number ; i++)
		this->_horde[i].announce(words);
}