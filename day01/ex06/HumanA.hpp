#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class humanA
{
private:
	std::string		_name;
	Weapon			*_inHand;

public:
	humanA();
	humanA(std::string name, Weapon &newWeapon);
	~humanA();

	void			attack() const;
};

#endif
