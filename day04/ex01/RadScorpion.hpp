#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{

public:
	RadScorpion();
	RadScorpion(RadScorpion const & src);
	RadScorpion &	operator=(RadScorpion const & src);
	virtual ~RadScorpion();
	
	virtual void	takeDamage(int damage);
};

#endif