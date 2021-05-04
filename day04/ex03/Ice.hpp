#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice() : AMateria("ice") {}
	Ice(Ice const & src);
	Ice &operator=(Ice const & src);
	virtual ~Ice() {}

	void			use(ICharacter & target);
	AMateria*		clone() const;
};

#endif