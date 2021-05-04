#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure() : AMateria("cure") {}
	Cure(Cure const & src);
	Cure &operator=(Cure const & src);
	virtual ~Cure() {}

	void			use(ICharacter & target);
	AMateria*		clone() const;
};

#endif