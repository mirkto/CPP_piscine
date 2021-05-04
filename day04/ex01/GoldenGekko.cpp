#include "GoldenGekko.hpp"

GoldenGekko::GoldenGekko()
{
	std::cout << "* GECK-O GECK-O GECK-O *" << std::endl;
	this->_type = "Golden Gekko";
	this->_hp = 120;
}

GoldenGekko::GoldenGekko(GoldenGekko const & src)
	{ *this = src; }

GoldenGekko &	GoldenGekko::operator=(GoldenGekko const & src)
{
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

GoldenGekko::~GoldenGekko()
	{ std::cout <<  "* geeckk-ooooo... *" << std::endl; }

void	GoldenGekko::takeDamage(int damage)
	{ Enemy::takeDamage(damage); }
