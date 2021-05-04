#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"


class Peon : public Victim
{
private:
	Peon();
public:
	virtual ~Peon();
	Peon(std::string name);

	virtual void	getPolymorphed() const;
};

#endif
