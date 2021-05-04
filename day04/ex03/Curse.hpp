#ifndef СURSE_HPP
# define СURSE_HPP

# include "AMateria.hpp"

class Curse : public AMateria
{
public:
	Curse() : AMateria("curse") {}
	Curse(Curse const & src);
	Curse &operator=(Curse const & src);
	virtual ~Curse() {}

	void			use(ICharacter & target);
	AMateria*		clone() const;
};

#endif