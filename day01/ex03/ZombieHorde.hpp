#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*_horde;
	int		_number;

public:
	ZombieHorde(int num);
	~ZombieHorde();

	void	announce(std::string words) const;
};

#endif
