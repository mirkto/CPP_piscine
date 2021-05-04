#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:
	SuperMutant();
	SuperMutant(SuperMutant const & src);
	SuperMutant &	operator=(SuperMutant const & src);
	virtual ~SuperMutant();
	
	virtual void	takeDamage(int damage);
};

#endif