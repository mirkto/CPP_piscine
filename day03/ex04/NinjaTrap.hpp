#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

#define CLR_WHT_U "\033[4;37m"
#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

class NinjaTrap : virtual public ClapTrap
{
// private:
// 	NinjaTrap();

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	virtual ~NinjaTrap();

	NinjaTrap &	operator=(NinjaTrap const & src);

	// Special move
	void	ninjaShoebox(ClapTrap const & target);
	void	ninjaShoebox(FragTrap const & target);
	void	ninjaShoebox(ScavTrap const & target);
	void	ninjaShoebox(NinjaTrap const & target);
};

#endif
