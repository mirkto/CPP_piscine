#ifndef GOLDENGEKKO_HPP
# define GOLDENGEKKO_HPP

#include "Enemy.hpp"

class GoldenGekko : public Enemy
{

public:
	GoldenGekko();
	GoldenGekko(GoldenGekko const & src);
	GoldenGekko &	operator=(GoldenGekko const & src);
	virtual ~GoldenGekko();
	
	virtual void	takeDamage(int damage);
};

#endif