#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	_type_now;

public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump();
};

#endif
