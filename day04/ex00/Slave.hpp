#ifndef SLAVE_HPP
# define SLAVE_HPP

# include <iostream>
# include "Victim.hpp"


class Slave : public Victim
{
private:
	Slave();
public:
	virtual ~Slave();
	Slave(std::string name);

	virtual void	getPolymorphed() const;
};

#endif
