#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class humanB
{
private:
	std::string		_name;
	Weapon			*_inHand;

public:
	humanB();
	humanB(std::string name);
	~humanB();

	void		attack() const;
	void		setWeapon(Weapon &newWeapon);
};

#endif
